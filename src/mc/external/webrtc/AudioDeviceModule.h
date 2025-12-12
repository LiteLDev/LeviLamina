#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioTransport; }
// clang-format on

namespace webrtc {

class AudioDeviceModule : public ::webrtc::RefCountInterface {
public:
    // AudioDeviceModule inner types declare
    // clang-format off
    struct Stats;
    // clang-format on

    // AudioDeviceModule inner types define
    enum class AudioLayer : int {
        KPlatformDefaultAudio                   = 0,
        KWindowsCoreAudio                       = 1,
        KWindowsCoreAudio2                      = 2,
        KLinuxAlsaAudio                         = 3,
        KLinuxPulseAudio                        = 4,
        KAndroidJavaAudio                       = 5,
        KAndroidOpenSLESAudio                   = 6,
        KAndroidJavaInputAndOpenSLESOutputAudio = 7,
        KAndroidAAudioAudio                     = 8,
        KAndroidJavaInputAndAAudioOutputAudio   = 9,
        KDummyAudio                             = 10,
    };

    enum class WindowsDeviceType : int {
        KDefaultCommunicationDevice = -1,
        KDefaultDevice              = -2,
    };

    struct Stats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk2b7b49;
        ::ll::UntypedStorage<8, 8> mUnk64a256;
        ::ll::UntypedStorage<8, 8> mUnk827bf3;
        ::ll::UntypedStorage<8, 8> mUnk98d5a9;
        ::ll::UntypedStorage<8, 8> mUnka88a3f;
        // NOLINTEND

    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int ActiveAudioLayer(::webrtc::AudioDeviceModule::AudioLayer*) const = 0;

    virtual int RegisterAudioCallback(::webrtc::AudioTransport*) = 0;

    virtual int Init() = 0;

    virtual int Terminate() = 0;

    virtual bool Initialized() const = 0;

    virtual short PlayoutDevices() = 0;

    virtual short RecordingDevices() = 0;

    virtual int PlayoutDeviceName(ushort, char*, char*) = 0;

    virtual int RecordingDeviceName(ushort, char*, char*) = 0;

    virtual int SetPlayoutDevice(ushort) = 0;

    virtual int SetPlayoutDevice(::webrtc::AudioDeviceModule::WindowsDeviceType) = 0;

    virtual int SetRecordingDevice(ushort) = 0;

    virtual int SetRecordingDevice(::webrtc::AudioDeviceModule::WindowsDeviceType) = 0;

    virtual int PlayoutIsAvailable(bool*) = 0;

    virtual int InitPlayout() = 0;

    virtual bool PlayoutIsInitialized() const = 0;

    virtual int RecordingIsAvailable(bool*) = 0;

    virtual int InitRecording() = 0;

    virtual bool RecordingIsInitialized() const = 0;

    virtual int StartPlayout() = 0;

    virtual int StopPlayout() = 0;

    virtual bool Playing() const = 0;

    virtual int StartRecording() = 0;

    virtual int StopRecording() = 0;

    virtual bool Recording() const = 0;

    virtual int InitSpeaker() = 0;

    virtual bool SpeakerIsInitialized() const = 0;

    virtual int InitMicrophone() = 0;

    virtual bool MicrophoneIsInitialized() const = 0;

    virtual int SpeakerVolumeIsAvailable(bool*) = 0;

    virtual int SetSpeakerVolume(uint) = 0;

    virtual int SpeakerVolume(uint*) const = 0;

    virtual int MaxSpeakerVolume(uint*) const = 0;

    virtual int MinSpeakerVolume(uint*) const = 0;

    virtual int MicrophoneVolumeIsAvailable(bool*) = 0;

    virtual int SetMicrophoneVolume(uint) = 0;

    virtual int MicrophoneVolume(uint*) const = 0;

    virtual int MaxMicrophoneVolume(uint*) const = 0;

    virtual int MinMicrophoneVolume(uint*) const = 0;

    virtual int SpeakerMuteIsAvailable(bool*) = 0;

    virtual int SetSpeakerMute(bool) = 0;

    virtual int SpeakerMute(bool*) const = 0;

    virtual int MicrophoneMuteIsAvailable(bool*) = 0;

    virtual int SetMicrophoneMute(bool) = 0;

    virtual int MicrophoneMute(bool*) const = 0;

    virtual int StereoPlayoutIsAvailable(bool*) const = 0;

    virtual int SetStereoPlayout(bool) = 0;

    virtual int StereoPlayout(bool*) const = 0;

    virtual int StereoRecordingIsAvailable(bool*) const = 0;

    virtual int SetStereoRecording(bool) = 0;

    virtual int StereoRecording(bool*) const = 0;

    virtual int PlayoutDelay(ushort*) const = 0;

    virtual bool BuiltInAECIsAvailable() const = 0;

    virtual bool BuiltInAGCIsAvailable() const = 0;

    virtual bool BuiltInNSIsAvailable() const = 0;

    virtual int EnableBuiltInAEC(bool) = 0;

    virtual int EnableBuiltInAGC(bool) = 0;

    virtual int EnableBuiltInNS(bool) = 0;

    virtual int GetPlayoutUnderrunCount() const;

    virtual ::std::optional<::webrtc::AudioDeviceModule::Stats> GetStats() const;

    virtual ~AudioDeviceModule() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
