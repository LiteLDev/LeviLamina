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
        KPlatformDefaultAudio = 0,
        KWindowsCoreAudio = 1,
        KWindowsCoreAudio2 = 2,
        KLinuxAlsaAudio = 3,
        KLinuxPulseAudio = 4,
        KAndroidJavaAudio = 5,
        KAndroidOpenSLESAudio = 6,
        KAndroidJavaInputAndOpenSLESOutputAudio = 7,
        KAndroidAAudioAudio = 8,
        KAndroidJavaInputAndAAudioOutputAudio = 9,
        KDummyAudio = 10,
    };
    
    enum class WindowsDeviceType : int {
        KDefaultCommunicationDevice = -1,
        KDefaultDevice = -2,
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
    // vIndex: 3
    virtual int ActiveAudioLayer(::webrtc::AudioDeviceModule::AudioLayer*) const = 0;

    // vIndex: 4
    virtual int RegisterAudioCallback(::webrtc::AudioTransport*) = 0;

    // vIndex: 5
    virtual int Init() = 0;

    // vIndex: 6
    virtual int Terminate() = 0;

    // vIndex: 7
    virtual bool Initialized() const = 0;

    // vIndex: 8
    virtual short PlayoutDevices() = 0;

    // vIndex: 9
    virtual short RecordingDevices() = 0;

    // vIndex: 10
    virtual int PlayoutDeviceName(ushort, char*, char*) = 0;

    // vIndex: 11
    virtual int RecordingDeviceName(ushort, char*, char*) = 0;

    // vIndex: 13
    virtual int SetPlayoutDevice(ushort) = 0;

    // vIndex: 12
    virtual int SetPlayoutDevice(::webrtc::AudioDeviceModule::WindowsDeviceType) = 0;

    // vIndex: 15
    virtual int SetRecordingDevice(ushort) = 0;

    // vIndex: 14
    virtual int SetRecordingDevice(::webrtc::AudioDeviceModule::WindowsDeviceType) = 0;

    // vIndex: 16
    virtual int PlayoutIsAvailable(bool*) = 0;

    // vIndex: 17
    virtual int InitPlayout() = 0;

    // vIndex: 18
    virtual bool PlayoutIsInitialized() const = 0;

    // vIndex: 19
    virtual int RecordingIsAvailable(bool*) = 0;

    // vIndex: 20
    virtual int InitRecording() = 0;

    // vIndex: 21
    virtual bool RecordingIsInitialized() const = 0;

    // vIndex: 22
    virtual int StartPlayout() = 0;

    // vIndex: 23
    virtual int StopPlayout() = 0;

    // vIndex: 24
    virtual bool Playing() const = 0;

    // vIndex: 25
    virtual int StartRecording() = 0;

    // vIndex: 26
    virtual int StopRecording() = 0;

    // vIndex: 27
    virtual bool Recording() const = 0;

    // vIndex: 28
    virtual int InitSpeaker() = 0;

    // vIndex: 29
    virtual bool SpeakerIsInitialized() const = 0;

    // vIndex: 30
    virtual int InitMicrophone() = 0;

    // vIndex: 31
    virtual bool MicrophoneIsInitialized() const = 0;

    // vIndex: 32
    virtual int SpeakerVolumeIsAvailable(bool*) = 0;

    // vIndex: 33
    virtual int SetSpeakerVolume(uint) = 0;

    // vIndex: 34
    virtual int SpeakerVolume(uint*) const = 0;

    // vIndex: 35
    virtual int MaxSpeakerVolume(uint*) const = 0;

    // vIndex: 36
    virtual int MinSpeakerVolume(uint*) const = 0;

    // vIndex: 37
    virtual int MicrophoneVolumeIsAvailable(bool*) = 0;

    // vIndex: 38
    virtual int SetMicrophoneVolume(uint) = 0;

    // vIndex: 39
    virtual int MicrophoneVolume(uint*) const = 0;

    // vIndex: 40
    virtual int MaxMicrophoneVolume(uint*) const = 0;

    // vIndex: 41
    virtual int MinMicrophoneVolume(uint*) const = 0;

    // vIndex: 42
    virtual int SpeakerMuteIsAvailable(bool*) = 0;

    // vIndex: 43
    virtual int SetSpeakerMute(bool) = 0;

    // vIndex: 44
    virtual int SpeakerMute(bool*) const = 0;

    // vIndex: 45
    virtual int MicrophoneMuteIsAvailable(bool*) = 0;

    // vIndex: 46
    virtual int SetMicrophoneMute(bool) = 0;

    // vIndex: 47
    virtual int MicrophoneMute(bool*) const = 0;

    // vIndex: 48
    virtual int StereoPlayoutIsAvailable(bool*) const = 0;

    // vIndex: 49
    virtual int SetStereoPlayout(bool) = 0;

    // vIndex: 50
    virtual int StereoPlayout(bool*) const = 0;

    // vIndex: 51
    virtual int StereoRecordingIsAvailable(bool*) const = 0;

    // vIndex: 52
    virtual int SetStereoRecording(bool) = 0;

    // vIndex: 53
    virtual int StereoRecording(bool*) const = 0;

    // vIndex: 54
    virtual int PlayoutDelay(ushort*) const = 0;

    // vIndex: 55
    virtual bool BuiltInAECIsAvailable() const = 0;

    // vIndex: 56
    virtual bool BuiltInAGCIsAvailable() const = 0;

    // vIndex: 57
    virtual bool BuiltInNSIsAvailable() const = 0;

    // vIndex: 58
    virtual int EnableBuiltInAEC(bool) = 0;

    // vIndex: 59
    virtual int EnableBuiltInAGC(bool) = 0;

    // vIndex: 60
    virtual int EnableBuiltInNS(bool) = 0;

    // vIndex: 61
    virtual int GetPlayoutUnderrunCount() const;

    // vIndex: 62
    virtual ::std::optional<::webrtc::AudioDeviceModule::Stats> GetStats() const;

    // vIndex: 2
    virtual ~AudioDeviceModule() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
