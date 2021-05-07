Pod::Spec.new do |s|
  s.name             = 'CJHome'
  s.version          = '1.0.0'
  s.summary          = '首页组件'
  s.description      = <<-DESC
  自定义业务组件
                         DESC
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'lele8446' => 'lele8446@foxmail.com' }
  # 此处修改成正确的代码仓库地址
  s.homepage         = 'http://xxx'
  s.source           = { :git => 'http://xxx.git', :tag => s.version.to_s }
  s.platform     = :ios
  s.ios.deployment_target = '9.0'
  s.requires_arc = true

  s.source_files = 'CJHome/Classes/**/*'
  s.resource_bundles = {
    'CJHome' => ['CJHome/Assets/*']
  }
  # s.public_header_files = 'CJHome/**/*.h'

  s.dependency 'CJRouter'
end
