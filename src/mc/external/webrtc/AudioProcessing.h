#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AecDump; }
namespace webrtc { class ProcessingConfig; }
namespace webrtc { class StreamConfig; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { struct AudioProcessingStats; }
// clang-format on

namespace webrtc {

class AudioProcessing : public ::webrtc::RefCountInterface {
public:
    // AudioProcessing inner types declare
    // clang-format off
    struct Config;
    class RuntimeSetting;
    // clang-format on

    // AudioProcessing inner types define
    enum class Error : int {
        KNoError                    = 0,
        KUnspecifiedError           = -1,
        KCreationFailedError        = -2,
        KUnsupportedComponentError  = -3,
        KUnsupportedFunctionError   = -4,
        KNullPointerError           = -5,
        KBadParameterError          = -6,
        KBadSampleRateError         = -7,
        KBadDataLengthError         = -8,
        KBadNumberChannelsError     = -9,
        KFileError                  = -10,
        KStreamParameterNotSetError = -11,
        KNotEnabledError            = -12,
        KBadStreamParameterWarning  = -13,
    };

    enum class NativeRate : int {
        KSampleRate8kHz  = 8000,
        KSampleRate16kHz = 16000,
        KSampleRate32kHz = 32000,
        KSampleRate48kHz = 48000,
    };

    struct Config {
    public:
        // Config inner types declare
        // clang-format off
        struct CaptureLevelAdjustment;
        struct EchoCanceller;
        struct GainController1;
        struct GainController2;
        struct HighPassFilter;
        struct NoiseSuppression;
        struct Pipeline;
        struct PreAmplifier;
        struct TransientSuppression;
        // clang-format on

        // Config inner types define
        struct CaptureLevelAdjustment {
        public:
            // CaptureLevelAdjustment inner types declare
            // clang-format off
            struct AnalogMicGainEmulation;
            // clang-format on

            // CaptureLevelAdjustment inner types define
            struct AnalogMicGainEmulation {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<1, 1> mUnkb81166;
                ::ll::UntypedStorage<4, 4> mUnkc5352a;
                // NOLINTEND

            public:
                // prevent constructor by default
                AnalogMicGainEmulation& operator=(AnalogMicGainEmulation const&);
                AnalogMicGainEmulation(AnalogMicGainEmulation const&);
                AnalogMicGainEmulation();
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<1, 1> mUnka287df;
            ::ll::UntypedStorage<4, 4> mUnk6d6b4b;
            ::ll::UntypedStorage<4, 4> mUnk153346;
            ::ll::UntypedStorage<4, 8> mUnkd49fb4;
            // NOLINTEND

        public:
            // prevent constructor by default
            CaptureLevelAdjustment& operator=(CaptureLevelAdjustment const&);
            CaptureLevelAdjustment(CaptureLevelAdjustment const&);
            CaptureLevelAdjustment();
        };

        struct EchoCanceller {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<1, 1> mUnke9a894;
            ::ll::UntypedStorage<1, 1> mUnke85a4f;
            ::ll::UntypedStorage<1, 1> mUnk6cdf68;
            ::ll::UntypedStorage<1, 1> mUnk2171df;
            // NOLINTEND

        public:
            // prevent constructor by default
            EchoCanceller& operator=(EchoCanceller const&);
            EchoCanceller(EchoCanceller const&);
            EchoCanceller();
        };

        struct GainController1 {
        public:
            // GainController1 inner types declare
            // clang-format off
            struct AnalogGainController;
            // clang-format on

            // GainController1 inner types define
            enum class Mode : int {
                KAdaptiveAnalog  = 0,
                KAdaptiveDigital = 1,
                KFixedDigital    = 2,
            };

            struct AnalogGainController {
            public:
                // AnalogGainController inner types declare
                // clang-format off
                struct ClippingPredictor;
                // clang-format on

                // AnalogGainController inner types define
                struct ClippingPredictor {
                public:
                    // ClippingPredictor inner types define
                    enum class Mode : int {
                        KClippingEventPrediction            = 0,
                        KAdaptiveStepClippingPeakPrediction = 1,
                        KFixedStepClippingPeakPrediction    = 2,
                    };

                public:
                    // member variables
                    // NOLINTBEGIN
                    ::ll::UntypedStorage<1, 1> mUnkfbd79b;
                    ::ll::UntypedStorage<4, 4> mUnk6c731f;
                    ::ll::UntypedStorage<4, 4> mUnk561ac8;
                    ::ll::UntypedStorage<4, 4> mUnkeda3fb;
                    ::ll::UntypedStorage<4, 4> mUnk426854;
                    ::ll::UntypedStorage<4, 4> mUnk990871;
                    ::ll::UntypedStorage<4, 4> mUnk3e59d8;
                    ::ll::UntypedStorage<1, 1> mUnka25776;
                    // NOLINTEND

                public:
                    // prevent constructor by default
                    ClippingPredictor& operator=(ClippingPredictor const&);
                    ClippingPredictor(ClippingPredictor const&);
                    ClippingPredictor();
                };

            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<1, 1>  mUnk681a13;
                ::ll::UntypedStorage<4, 4>  mUnk181d6f;
                ::ll::UntypedStorage<4, 4>  mUnk2e6f45;
                ::ll::UntypedStorage<1, 1>  mUnkd13cea;
                ::ll::UntypedStorage<4, 4>  mUnk1014a4;
                ::ll::UntypedStorage<4, 4>  mUnk152fb6;
                ::ll::UntypedStorage<4, 4>  mUnk9c4d36;
                ::ll::UntypedStorage<4, 32> mUnkc4a29c;
                // NOLINTEND

            public:
                // prevent constructor by default
                AnalogGainController& operator=(AnalogGainController const&);
                AnalogGainController(AnalogGainController const&);
                AnalogGainController();
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<1, 1>  mUnk39034a;
            ::ll::UntypedStorage<4, 4>  mUnkae39cc;
            ::ll::UntypedStorage<4, 4>  mUnk69ccfd;
            ::ll::UntypedStorage<4, 4>  mUnkb9580d;
            ::ll::UntypedStorage<1, 1>  mUnk9d8147;
            ::ll::UntypedStorage<4, 60> mUnk1b2f78;
            // NOLINTEND

        public:
            // prevent constructor by default
            GainController1& operator=(GainController1 const&);
            GainController1(GainController1 const&);
            GainController1();
        };

        struct GainController2 {
        public:
            // GainController2 inner types declare
            // clang-format off
            struct AdaptiveDigital;
            struct FixedDigital;
            struct InputVolumeController;
            // clang-format on

            // GainController2 inner types define
            struct AdaptiveDigital {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<1, 1> mUnk4a4de2;
                ::ll::UntypedStorage<4, 4> mUnkbb4e0f;
                ::ll::UntypedStorage<4, 4> mUnkb90bf1;
                ::ll::UntypedStorage<4, 4> mUnk434c87;
                ::ll::UntypedStorage<4, 4> mUnk56701e;
                ::ll::UntypedStorage<4, 4> mUnk6f79c7;
                // NOLINTEND

            public:
                // prevent constructor by default
                AdaptiveDigital& operator=(AdaptiveDigital const&);
                AdaptiveDigital(AdaptiveDigital const&);
                AdaptiveDigital();
            };

            struct FixedDigital {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<4, 4> mUnk4dfd34;
                // NOLINTEND

            public:
                // prevent constructor by default
                FixedDigital& operator=(FixedDigital const&);
                FixedDigital(FixedDigital const&);
                FixedDigital();
            };

            struct InputVolumeController {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<1, 1> mUnkb10c80;
                // NOLINTEND

            public:
                // prevent constructor by default
                InputVolumeController& operator=(InputVolumeController const&);
                InputVolumeController(InputVolumeController const&);
                InputVolumeController();
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<1, 1>  mUnk77bbe3;
            ::ll::UntypedStorage<1, 1>  mUnkf60b75;
            ::ll::UntypedStorage<4, 24> mUnkbd6377;
            ::ll::UntypedStorage<4, 4>  mUnk342986;
            // NOLINTEND

        public:
            // prevent constructor by default
            GainController2& operator=(GainController2 const&);
            GainController2(GainController2 const&);
            GainController2();
        };

        struct HighPassFilter {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<1, 1> mUnka88627;
            ::ll::UntypedStorage<1, 1> mUnk5aa257;
            // NOLINTEND

        public:
            // prevent constructor by default
            HighPassFilter& operator=(HighPassFilter const&);
            HighPassFilter(HighPassFilter const&);
            HighPassFilter();
        };

        struct NoiseSuppression {
        public:
            // NoiseSuppression inner types define
            enum class Level : int {
                KLow      = 0,
                KModerate = 1,
                KHigh     = 2,
                KVeryHigh = 3,
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<1, 1> mUnkacd85c;
            ::ll::UntypedStorage<4, 4> mUnk24b182;
            ::ll::UntypedStorage<1, 1> mUnke3c317;
            // NOLINTEND

        public:
            // prevent constructor by default
            NoiseSuppression& operator=(NoiseSuppression const&);
            NoiseSuppression(NoiseSuppression const&);
            NoiseSuppression();
        };

        struct Pipeline {
        public:
            // Pipeline inner types define
            enum class DownmixMethod : int {
                KAverageChannels = 0,
                KUseFirstChannel = 1,
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4> mUnk6a1ac1;
            ::ll::UntypedStorage<1, 1> mUnk774cfa;
            ::ll::UntypedStorage<1, 1> mUnkf45569;
            ::ll::UntypedStorage<4, 4> mUnk7c87d2;
            // NOLINTEND

        public:
            // prevent constructor by default
            Pipeline& operator=(Pipeline const&);
            Pipeline(Pipeline const&);
            Pipeline();
        };

        struct PreAmplifier {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<1, 1> mUnk278b7f;
            ::ll::UntypedStorage<4, 4> mUnkddaf90;
            // NOLINTEND

        public:
            // prevent constructor by default
            PreAmplifier& operator=(PreAmplifier const&);
            PreAmplifier(PreAmplifier const&);
            PreAmplifier();
        };

        struct TransientSuppression {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<1, 1> mUnke6e9cd;
            // NOLINTEND

        public:
            // prevent constructor by default
            TransientSuppression& operator=(TransientSuppression const&);
            TransientSuppression(TransientSuppression const&);
            TransientSuppression();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkc32b4d;
        ::ll::UntypedStorage<4, 8>  mUnk72deaa;
        ::ll::UntypedStorage<4, 20> mUnk67ae26;
        ::ll::UntypedStorage<1, 2>  mUnk6ee2da;
        ::ll::UntypedStorage<1, 4>  mUnke928c4;
        ::ll::UntypedStorage<4, 12> mUnk756123;
        ::ll::UntypedStorage<1, 1>  mUnk1237fa;
        ::ll::UntypedStorage<4, 80> mUnke1742d;
        ::ll::UntypedStorage<4, 32> mUnk51a21f;
        // NOLINTEND

    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();
    };

    class RuntimeSetting {
    public:
        // RuntimeSetting inner types declare
        // clang-format off
        struct PlayoutAudioDeviceInfo;
        // clang-format on

        // RuntimeSetting inner types define
        enum class Type : int {
            KNotSpecified                         = 0,
            KCapturePreGain                       = 1,
            KCaptureCompressionGain               = 2,
            KCaptureFixedPostGain                 = 3,
            KPlayoutVolumeChange                  = 4,
            KCustomRenderProcessingRuntimeSetting = 5,
            KPlayoutAudioDeviceChange             = 6,
            KCapturePostGain                      = 7,
            KCaptureOutputUsed                    = 8,
        };

        struct PlayoutAudioDeviceInfo {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4> mUnk419420;
            ::ll::UntypedStorage<4, 4> mUnk76aa4a;
            // NOLINTEND

        public:
            // prevent constructor by default
            PlayoutAudioDeviceInfo& operator=(PlayoutAudioDeviceInfo const&);
            PlayoutAudioDeviceInfo(PlayoutAudioDeviceInfo const&);
            PlayoutAudioDeviceInfo();
        };

        union U {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 8> mUnk6147ee;
            ::ll::UntypedStorage<4, 8> mUnk37edb9;
            ::ll::UntypedStorage<1, 8> mUnk2e8ef6;
            ::ll::UntypedStorage<4, 8> mUnk9852fd;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk3684bd;
        ::ll::UntypedStorage<4, 8> mUnk7644ee;
        // NOLINTEND

    public:
        // prevent constructor by default
        RuntimeSetting& operator=(RuntimeSetting const&);
        RuntimeSetting(RuntimeSetting const&);
        RuntimeSetting();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AudioProcessing() /*override*/ = default;

    virtual int Initialize() = 0;

    virtual int Initialize(::webrtc::ProcessingConfig const&) = 0;

    virtual void ApplyConfig(::webrtc::AudioProcessing::Config const&) = 0;

    virtual int proc_sample_rate_hz() const = 0;

    virtual int proc_split_sample_rate_hz() const = 0;

    virtual uint64 num_input_channels() const = 0;

    virtual uint64 num_proc_channels() const = 0;

    virtual uint64 num_output_channels() const = 0;

    virtual uint64 num_reverse_channels() const = 0;

    virtual void set_output_will_be_muted(bool) = 0;

    virtual void SetRuntimeSetting(::webrtc::AudioProcessing::RuntimeSetting) = 0;

    virtual bool PostRuntimeSetting(::webrtc::AudioProcessing::RuntimeSetting) = 0;

    virtual int
    ProcessStream(short const* const, ::webrtc::StreamConfig const&, ::webrtc::StreamConfig const&, short* const) = 0;

    virtual int
    ProcessStream(float const* const*, ::webrtc::StreamConfig const&, ::webrtc::StreamConfig const&, float* const*) = 0;

    virtual int ProcessReverseStream(
        short const* const,
        ::webrtc::StreamConfig const&,
        ::webrtc::StreamConfig const&,
        short* const
    ) = 0;

    virtual int ProcessReverseStream(
        float const* const*,
        ::webrtc::StreamConfig const&,
        ::webrtc::StreamConfig const&,
        float* const*
    ) = 0;

    virtual int AnalyzeReverseStream(float const* const*, ::webrtc::StreamConfig const&) = 0;

    virtual bool GetLinearAecOutput(::rtc::ArrayView<::std::array<float, 160>>) const = 0;

    virtual void set_stream_analog_level(int) = 0;

    virtual int recommended_stream_analog_level() const = 0;

    virtual int set_stream_delay_ms(int) = 0;

    virtual int stream_delay_ms() const = 0;

    virtual void set_stream_key_pressed(bool) = 0;

    virtual bool CreateAndAttachAecDump(::std::string_view, int64, ::webrtc::TaskQueueBase*) = 0;

    virtual bool CreateAndAttachAecDump(::_iobuf*, int64, ::webrtc::TaskQueueBase*) = 0;

    virtual void AttachAecDump(::std::unique_ptr<::webrtc::AecDump>) = 0;

    virtual void DetachAecDump() = 0;

    virtual ::webrtc::AudioProcessingStats GetStatistics() = 0;

    virtual ::webrtc::AudioProcessingStats GetStatistics(bool) = 0;

    virtual ::webrtc::AudioProcessing::Config GetConfig() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
