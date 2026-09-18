#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FlushingIOController.h"
#include "mc/scripting/diagnostics/IDebuggerStatPublisher.h"

// auto generated forward declare list
// clang-format off
class DebuggerStat;
namespace Core { class Path; }
namespace Core { class Result; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DebuggerDiagnosticsPublishToFile : public ::IDebuggerStatPublisher {
public:
    // DebuggerDiagnosticsPublishToFile inner types declare
    // clang-format off
    class StreamFlusher;
    // clang-format on

    // DebuggerDiagnosticsPublishToFile inner types define
    class StreamFlusher : public ::Bedrock::FlushingIOController::Flusher {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk4fb15a;
        ::ll::UntypedStorage<8, 8>  mUnk857065;
        ::ll::UntypedStorage<8, 8>  mUnkaa14a7;
        // NOLINTEND

    public:
        // prevent constructor by default
        StreamFlusher& operator=(StreamFlusher const&);
        StreamFlusher(StreamFlusher const&);
        StreamFlusher();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~StreamFlusher() /*override*/ = default;

        virtual ::Core::Result _flushBuffer(void const* data, uint64 amount) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::Core::Result $_flushBuffer(void const* data, uint64 amount);


        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7508e8;
    ::ll::UntypedStorage<4, 4>  mUnke24b69;
    ::ll::UntypedStorage<4, 4>  mUnk54c986;
    ::ll::UntypedStorage<8, 32> mUnkddd2f2;
    ::ll::UntypedStorage<8, 32> mUnkab4715;
    ::ll::UntypedStorage<8, 8>  mUnk19bd45;
    ::ll::UntypedStorage<8, 8>  mUnkb3fcdb;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggerDiagnosticsPublishToFile& operator=(DebuggerDiagnosticsPublishToFile const&);
    DebuggerDiagnosticsPublishToFile(DebuggerDiagnosticsPublishToFile const&);
    DebuggerDiagnosticsPublishToFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DebuggerDiagnosticsPublishToFile() /*override*/ = default;

    virtual bool isStatPublisherEnabled() const /*override*/;

    virtual void publishStats(uint64 collectedTick, ::std::vector<::DebuggerStat> const& stats) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DebuggerDiagnosticsPublishToFile(
        ::cereal::ReflectionCtx& ctx,
        bool                     autoStart,
        ::std::optional<uint>    maxCaptureFiles,
        ::std::optional<uint>    maxCaptureFileSize
    );

    MCNAPI bool _createNewCapture(::Core::Path capturePath);

    MCNAPI ::Core::Path _getCapturePath(int captureIndex) const;

    MCNAPI bool _initBasePath();

    MCNAPI bool startCapture();

    MCNAPI ::std::optional<::Core::Path> stopCapture();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::cereal::ReflectionCtx& ctx,
        bool                     autoStart,
        ::std::optional<uint>    maxCaptureFiles,
        ::std::optional<uint>    maxCaptureFileSize
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isStatPublisherEnabled() const;

    MCNAPI void $publishStats(uint64 collectedTick, ::std::vector<::DebuggerStat> const& stats);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
