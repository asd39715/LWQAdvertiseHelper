

Pod::Spec.new do |s|

  s.name         = "LWQAdvertiseHelper"
  s.version      = "0.0.1"
  s.summary      = "启动广告管理."

  s.homepage     = "https://github.com/asd39715/LWQAdvertiseHelper.git"

  s.license      = "MIT"

  s.author             = { "asd39715" => "w327177547@163.com" }

  s.platform     = :ios, "7.0"

  s.source       = { :git => "https://github.com/asd39715/LWQAdvertiseHelper.git", :tag => "0.0.1" }

  s.source_files  = "Classes/**/*"

  s.frameworks = "Foundation", "UIKit"

  s.requires_arc = true

end
