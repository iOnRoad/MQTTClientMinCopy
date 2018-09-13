Pod::Spec.new do |mqttc|
mqttc.name         = "MQTTClientMinCopy"
mqttc.version      = "0.15.1"
mqttc.summary      = "iOS, macOS and tvOS native ObjectiveC MQTT Client Framework"
mqttc.homepage     = "https://github.com/novastone-media/MQTT-Client-Framework"
mqttc.license      = { :type => "EPLv1", :file => "LICENSE" }
mqttc.author       = { "novastonemedia" => "ios@novastonemedia.com" }
mqttc.source       = {
:git => "https://github.com/iOnRoad/MQTTClientMinCopy.git",
:tag => "0.15.1",
:submodules => true
}

mqttc.requires_arc = true
mqttc.platform = :ios, "6.1", :osx, "10.10", :tvos, "9.0"
mqttc.ios.deployment_target = "6.1"
mqttc.osx.deployment_target = "10.10"
mqttc.tvos.deployment_target = "9.0"
mqttc.source_files  = "MQTTClientMinCopy"

end
