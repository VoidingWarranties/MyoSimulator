#include "Hub.h"

using namespace MyoSim;

void Hub::onPair(myo::Myo* myo, uint64_t timestamp,
                 myo::FirmwareVersion firmware_version) {
  for (auto listener : listeners_) {
    listener->onPair(myo, timestamp, firmware_version);
  }
}

void Hub::onUnpair(myo::Myo* myo, uint64_t timestamp) {
  for (auto listener : listeners_) {
    listener->onUnpair(myo, timestamp);
  }
}

void Hub::onConnect(myo::Myo* myo, uint64_t timestamp,
                    myo::FirmwareVersion firmware_version) {
  for (auto listener : listeners_) {
    listener->onConnect(myo, timestamp, firmware_version);
  }
}

void Hub::onDisconnect(myo::Myo* myo, uint64_t timestamp) {
  for (auto listener : listeners_) {
    listener->onDisconnect(myo, timestamp);
  }
}

void Hub::onArmSync(myo::Myo* myo, uint64_t timestamp, myo::Arm arm,
                    myo::XDirection x_direction) {
  for (auto listener : listeners_) {
    listener->onArmSync(myo, timestamp, arm, x_direction);
  }
}

void Hub::onArmUnsync(myo::Myo* myo, uint64_t timestamp) {
  for (auto listener : listeners_) {
    listener->onArmUnsync(myo, timestamp);
  }
}

void Hub::onUnlock(myo::Myo* myo, uint64_t timestamp) {
  for (auto listener : listeners_) {
    listener->onUnlock(myo, timestamp);
  }
}

void Hub::onLock(myo::Myo* myo, uint64_t timestamp) {
  for (auto listener : listeners_) {
    listener->onLock(myo, timestamp);
  }
}

void Hub::onPose(myo::Myo* myo, uint64_t timestamp, const myo::Pose& pose) {
  for (auto listener : listeners_) {
    listener->onPose(myo, timestamp, pose);
  }
}

void Hub::onOrientationData(myo::Myo* myo, uint64_t timestamp,
                            const myo::Quaternion<float>& rotation) {
  for (auto listener : listeners_) {
    listener->onOrientationData(myo, timestamp, rotation);
  }
}

void Hub::onAccelerometerData(myo::Myo* myo, uint64_t timestamp,
                              const myo::Vector3<float>& accel) {
  for (auto listener : listeners_) {
    listener->onAccelerometerData(myo, timestamp, accel);
  }
}

void Hub::onGyroscopeData(myo::Myo* myo, uint64_t timestamp,
                          const myo::Vector3<float>& gyro) {
  for (auto listener : listeners_) {
    listener->onGyroscopeData(myo, timestamp, gyro);
  }
}

void Hub::onRssi(myo::Myo* myo, uint64_t timestamp, int8_t rssi) {
  for (auto listener : listeners_) {
    listener->onRssi(myo, timestamp, rssi);
  }
}

void Hub::onEmgData(myo::Myo* myo, uint64_t timestamp, const int8_t* emg) {
  for (auto listener : listeners_) {
    listener->onEmgData(myo, timestamp, emg);
  }
}