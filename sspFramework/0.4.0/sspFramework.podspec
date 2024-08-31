#
# Be sure to run `pod lib lint sspFramework.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'sspFramework'
  s.version          = '0.4.0'
  s.summary          = 'simple tools'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: simple toolssimple toolssimple toolssimple tools
                       DESC

  s.homepage         = 'https://github.com/853539242163com/sspFramework'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'fangchao' => 'fangchao@weixinkd.com' }
  s.source           = { :git => 'https://github.com/853539242163com/sspFramework.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '12.0'
   s.ios.vendored_framework   = 'sspFramework.framework'



  s.frameworks = 'MobileCoreServices', 'CoreGraphics', 'Security', 'SystemConfiguration', 'CoreTelephony','AdSupport', 'CoreData','StoreKit'
  s.ios.libraries = 'z', 'sqlite3'

  s.pod_target_xcconfig = { 
    'VALID_ARCHS' => 'x86_64 armv7 arm64'
  }

  s.dependency 'AFNetworking'
  s.dependency 'BaiduMobAdSDK'
  s.dependency 'BUAdSDK'
  s.dependency 'KSAdSDK' 
  s.dependency 'YouTuiAdSDK' 
  s.dependency 'OctopusSDK' 




  
  # s.resource_bundles = {
  #   'sspFramework' => ['sspFramework/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
