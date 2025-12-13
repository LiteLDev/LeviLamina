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
    struct EncodedInfoLeaf;
    struct EncodedInfo;
    // clang-format on

    // AudioEncoder inner types define
    enum class Application : int {
        KSpeech = 0,
        KAudio  = 1,
    };

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

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AudioEncoder() = default;

    virtual int SampleRateHz() const = 0;

    virtual uint64 NumChannels() const = 0;

    virtual int RtpTimestampRateHz() const;

    virtual uint64 Num10MsFramesInNextPacket() const = 0;

    virtual uint64 Max10MsFramesInAPacket() const = 0;

    virtual int GetTargetBitrate() const = 0;

    virtual void Reset() = 0;

    virtual bool SetFec(bool);

    virtual bool SetDtx(bool);

    virtual bool GetDtx() const;

    virtual bool SetApplication(::webrtc::AudioEncoder::Application);

    virtual void SetMaxPlaybackRate(int);

    virtual void SetTargetBitrate(int);

    virtual ::rtc::ArrayView<::std::unique_ptr<::webrtc::AudioEncoder>> ReclaimContainedEncoders();

    virtual bool EnableAudioNetworkAdaptor(::std::string const&, ::webrtc::RtcEventLog*);

    virtual void DisableAudioNetworkAdaptor();

    virtual void OnReceivedUplinkPacketLossFraction(float);

    virtual void OnReceivedUplinkRecoverablePacketLossFraction(float);

    virtual void OnReceivedTargetAudioBitrate(int);

    virtual void OnReceivedUplinkBandwidth(int, ::std::optional<int64>);

    virtual void OnReceivedUplinkAllocation(::webrtc::BitrateAllocationUpdate);

    virtual void OnReceivedRtt(int);

    virtual void OnReceivedOverhead(uint64);

    virtual void SetReceiverFrameLengthRange(int, int);

    virtual ::webrtc::ANAStats GetANAStats() const;

    virtual ::std::optional<::std::pair<::webrtc::TimeDelta, ::webrtc::TimeDelta>> GetFrameLengthRange() const = 0;

    virtual ::std::optional<::std::pair<::webrtc::DataRate, ::webrtc::DataRate>> GetBitrateRange() const;

    virtual ::webrtc::AudioEncoder::EncodedInfo
    EncodeImpl(uint, ::rtc::ArrayView<short const>, ::rtc::BufferT<uchar, 0>*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
