#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioFrame; }
namespace webrtc { struct NetEqLifetimeStatistics; }
namespace webrtc { struct NetEqNetworkStatistics; }
namespace webrtc { struct NetEqOperationsAndState; }
namespace webrtc { struct RTPHeader; }
namespace webrtc { struct SdpAudioFormat; }
// clang-format on

namespace webrtc {

class NetEq {
public:
    // NetEq inner types declare
    // clang-format off
    struct Config;
    struct DecoderFormat;
    // clang-format on

    // NetEq inner types define
    enum class Mode : int {
        KNormal                    = 0,
        KExpand                    = 1,
        KMerge                     = 2,
        KAccelerateSuccess         = 3,
        KAccelerateLowEnergy       = 4,
        KAccelerateFail            = 5,
        KPreemptiveExpandSuccess   = 6,
        KPreemptiveExpandLowEnergy = 7,
        KPreemptiveExpandFail      = 8,
        KRfc3389Cng                = 9,
        KCodecInternalCng          = 10,
        KCodecPlc                  = 11,
        KDtmf                      = 12,
        KError                     = 13,
        KUndefined                 = 14,
    };

    enum class Operation : int {
        KNormal             = 0,
        KMerge              = 1,
        KExpand             = 2,
        KAccelerate         = 3,
        KFastAccelerate     = 4,
        KPreemptiveExpand   = 5,
        KRfc3389Cng         = 6,
        KRfc3389CngNoPacket = 7,
        KCodecInternalCng   = 8,
        KDtmf               = 9,
        KUndefined          = 10,
    };

    enum class ReturnCodes : int {
        KOK   = 0,
        KFail = -1,
    };

    struct Config {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk8f2462;
        ::ll::UntypedStorage<8, 8>  mUnk691870;
        ::ll::UntypedStorage<4, 4>  mUnk96af64;
        ::ll::UntypedStorage<4, 4>  mUnk5bb63b;
        ::ll::UntypedStorage<1, 1>  mUnk19fd7b;
        ::ll::UntypedStorage<1, 1>  mUnk322ecb;
        ::ll::UntypedStorage<1, 1>  mUnkc289c8;
        ::ll::UntypedStorage<8, 16> mUnk7adb24;
        ::ll::UntypedStorage<1, 1>  mUnkf8cecb;
        // NOLINTEND

    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();
    };

    struct DecoderFormat {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk4cdcd3;
        ::ll::UntypedStorage<4, 4>  mUnkdf1c40;
        ::ll::UntypedStorage<8, 64> mUnk81b817;
        // NOLINTEND

    public:
        // prevent constructor by default
        DecoderFormat& operator=(DecoderFormat const&);
        DecoderFormat(DecoderFormat const&);
        DecoderFormat();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetEq() = default;

    virtual int InsertPacket(::webrtc::RTPHeader const&, ::rtc::ArrayView<uchar const>) = 0;

    virtual void InsertEmptyPacket(::webrtc::RTPHeader const&) = 0;

    virtual int GetAudio(::webrtc::AudioFrame*, bool*, int*, ::std::optional<::webrtc::NetEq::Operation>) = 0;

    virtual void SetCodecs(::std::map<int, ::webrtc::SdpAudioFormat> const&) = 0;

    virtual bool RegisterPayloadType(int, ::webrtc::SdpAudioFormat const&) = 0;

    virtual int RemovePayloadType(uchar) = 0;

    virtual void RemoveAllPayloadTypes() = 0;

    virtual bool SetMinimumDelay(int) = 0;

    virtual bool SetMaximumDelay(int) = 0;

    virtual bool SetBaseMinimumDelayMs(int) = 0;

    virtual int GetBaseMinimumDelayMs() const = 0;

    virtual int TargetDelayMs() const = 0;

    virtual int FilteredCurrentDelayMs() const = 0;

    virtual int NetworkStatistics(::webrtc::NetEqNetworkStatistics*) = 0;

    virtual ::webrtc::NetEqNetworkStatistics CurrentNetworkStatistics() const = 0;

    virtual ::webrtc::NetEqLifetimeStatistics GetLifetimeStatistics() const = 0;

    virtual ::webrtc::NetEqOperationsAndState GetOperationsAndState() const = 0;

    virtual ::std::optional<uint> GetPlayoutTimestamp() const = 0;

    virtual int last_output_sample_rate_hz() const = 0;

    virtual ::std::optional<::webrtc::NetEq::DecoderFormat> GetDecoderFormat(int) const = 0;

    virtual void FlushBuffers() = 0;

    virtual void EnableNack(uint64) = 0;

    virtual void DisableNack() = 0;

    virtual ::std::vector<ushort> GetNackList(int64) const = 0;

    virtual int SyncBufferSizeMs() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
