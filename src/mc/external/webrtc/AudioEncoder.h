#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/BufferT.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class TimeDelta; }
namespace webrtc { struct ANAStats; }
namespace webrtc { struct BitrateAllocationUpdate; }
// clang-format on

namespace webrtc {

class AudioEncoder {
public:
    // AudioEncoder inner types declare
    // clang-format off
    struct EncodedInfo;
    struct EncodedInfoLeaf;
    // clang-format on

    // AudioEncoder inner types define
    enum class CodecType : int {
        KOther                    = 0,
        KOpus                     = 1,
        KIsac                     = 2,
        KPcmA                     = 3,
        KPcmU                     = 4,
        KG722                     = 5,
        KIlbc                     = 6,
        KMaxLoggedAudioCodecTypes = 7,
    };

    struct EncodedInfoLeaf {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk513c37;
        ::ll::UntypedStorage<4, 4> mUnk8f63bf;
        ::ll::UntypedStorage<4, 4> mUnka3a4b3;
        ::ll::UntypedStorage<1, 1> mUnk77e34c;
        ::ll::UntypedStorage<1, 1> mUnk9eb05e;
        ::ll::UntypedStorage<4, 4> mUnkbc04f7;
        // NOLINTEND

    public:
        // prevent constructor by default
        EncodedInfoLeaf& operator=(EncodedInfoLeaf const&);
        EncodedInfoLeaf(EncodedInfoLeaf const&);
        EncodedInfoLeaf();
    };

    struct EncodedInfo : public ::webrtc::AudioEncoder::EncodedInfoLeaf {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk3ab0dc;
        // NOLINTEND

    public:
        // prevent constructor by default
        EncodedInfo& operator=(EncodedInfo const&);
        EncodedInfo(EncodedInfo const&);
        EncodedInfo();
    };

    enum class Application : int {
        KSpeech = 0,
        KAudio  = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AudioEncoder() = default;

    // vIndex: 1
    virtual int SampleRateHz() const = 0;

    // vIndex: 2
    virtual uint64 NumChannels() const = 0;

    // vIndex: 3
    virtual int RtpTimestampRateHz() const;

    // vIndex: 4
    virtual uint64 Num10MsFramesInNextPacket() const = 0;

    // vIndex: 5
    virtual uint64 Max10MsFramesInAPacket() const = 0;

    // vIndex: 6
    virtual int GetTargetBitrate() const = 0;

    // vIndex: 7
    virtual void Reset() = 0;

    // vIndex: 8
    virtual bool SetFec(bool);

    // vIndex: 9
    virtual bool SetDtx(bool);

    // vIndex: 10
    virtual bool GetDtx() const;

    // vIndex: 11
    virtual bool SetApplication(::webrtc::AudioEncoder::Application);

    // vIndex: 12
    virtual void SetMaxPlaybackRate(int);

    // vIndex: 13
    virtual void SetTargetBitrate(int);

    // vIndex: 14
    virtual ::rtc::ArrayView<::std::unique_ptr<::webrtc::AudioEncoder>> ReclaimContainedEncoders();

    // vIndex: 15
    virtual bool EnableAudioNetworkAdaptor(::std::string const&, ::webrtc::RtcEventLog*);

    // vIndex: 16
    virtual void DisableAudioNetworkAdaptor();

    // vIndex: 17
    virtual void OnReceivedUplinkPacketLossFraction(float);

    // vIndex: 18
    virtual void OnReceivedUplinkRecoverablePacketLossFraction(float);

    // vIndex: 19
    virtual void OnReceivedTargetAudioBitrate(int);

    // vIndex: 20
    virtual void OnReceivedUplinkBandwidth(int, ::std::optional<int64>);

    // vIndex: 21
    virtual void OnReceivedUplinkAllocation(::webrtc::BitrateAllocationUpdate);

    // vIndex: 22
    virtual void OnReceivedRtt(int);

    // vIndex: 23
    virtual void OnReceivedOverhead(uint64);

    // vIndex: 24
    virtual void SetReceiverFrameLengthRange(int, int);

    // vIndex: 25
    virtual ::webrtc::ANAStats GetANAStats() const;

    // vIndex: 26
    virtual ::std::optional<::std::pair<::webrtc::TimeDelta, ::webrtc::TimeDelta>> GetFrameLengthRange() const = 0;

    // vIndex: 27
    virtual ::std::optional<::std::pair<::webrtc::DataRate, ::webrtc::DataRate>> GetBitrateRange() const;

    // vIndex: 28
    virtual ::webrtc::AudioEncoder::EncodedInfo
    EncodeImpl(uint, ::rtc::ArrayView<short const>, ::rtc::BufferT<uchar, 0>*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
