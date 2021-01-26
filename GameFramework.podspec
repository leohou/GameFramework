Pod::Spec.new do |s|
  s.name = "GameFramework"
  s.version = "0.3"
  s.summary = "GameFramework"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"wesaiPublic"=>"app@wesai.com"}
  s.homepage = "https://github.com/leohou/GameFramework"
  s.description = "TODO: Add long description of the pod here."
  s.frameworks = ["UIKit", "Foundation", "CoreTelephony", "SystemConfiguration", "CoreGraphics", "AdSupport", "Security", "WebKit","StoreKit","Accelerate","MobileCoreServices"]
  #系统的.a
  s.library   ="sqlite3"
  s.xcconfig = {"OTHER_LDFLAGS"=>"-ObjC"}
  s.source = { :git => 'https://github.com/leohou/GameFramework.git', :tag =>s.version  }
  s.platform                  = :ios
  s.ios.deployment_target     = '9.0'
  s.swift_version             = '4.0'
  s.ios.vendored_frameworks = 'iOS/*.framework'

  # 依赖库
  s.dependency 'FBSDKLoginKit'
  s.dependency 'FBSDKShareKit'
  #pod上使用xcassets 这个图片打包会出问题
   #s.resource=['ios/Resource/**/*.{xib,cer}']
end
