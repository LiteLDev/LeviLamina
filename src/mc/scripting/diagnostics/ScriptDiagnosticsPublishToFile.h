#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FlushingIOController.h"
#include "mc/scripting/diagnostics/IScriptStatPublisher.h"

// auto generated forward declare list
// clang-format off
class ScriptStat;
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

class ScriptDiagnosticsPublishToFile : public ::IScriptStatPublisher {
public:
    // ScriptDiagnosticsPublishToFile inner types declare
    // clang-format off
    class StreamFlusher;
    // clang-format on

    // ScriptDiagnosticsPublishToFile inner types define
    class StreamFlusher : public ::Bedrock::FlushingIOController::Flusher {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnka64202;
        ::ll::UntypedStorage<8, 8>  mUnkf9c1a3;
        ::ll::UntypedStorage<8, 8>  mUnk3d53df;
        // NOLINTEND

    public:
        // prevent constructor by default
        StreamFlusher& operator=(StreamFlusher const&);
        StreamFlusher(StreamFlusher const&);
        StreamFlusher();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~StreamFlusher() /*override*/ = default;

        // vIndex: 1
        virtual ::Core::Result _flushBuffer(void const* data, uint64 amount) /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit StreamFlusher(::Core::Path const& streamPath);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Core::Path const& streamPath);
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::Core::Result $_flushBuffer(void const* data, uint64 amount);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkbeba36;
    ::ll::UntypedStorage<4, 4>  mUnkd0b8ad;
    ::ll::UntypedStorage<4, 4>  mUnk547915;
    ::ll::UntypedStorage<8, 32> mUnk4c3726;
    ::ll::UntypedStorage<8, 32> mUnkfcfb98;
    ::ll::UntypedStorage<8, 8>  mUnk193591;
    ::ll::UntypedStorage<8, 8>  mUnke47e3c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsPublishToFile& operator=(ScriptDiagnosticsPublishToFile const&);
    ScriptDiagnosticsPublishToFile(ScriptDiagnosticsPublishToFile const&);
    ScriptDiagnosticsPublishToFile();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptDiagnosticsPublishToFile() /*override*/ = default;

    // vIndex: 1
    virtual bool isStatPublisherEnabled() const /*override*/;

    // vIndex: 2
    virtual void publishStats(uint64 collectedTick, ::std::vector<::ScriptStat> const& stats) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _createNewCapture(::Core::Path capturePath);

    MCNAPI bool _cyclePreviousCaptures();

    MCNAPI ::Core::Path _getCapturePath(int captureIndex) const;

    MCNAPI bool _initBasePath();

    MCNAPI bool startCapture();

    MCNAPI ::std::optional<::Core::Path> stopCapture();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isStatPublisherEnabled() const;

    MCNAPI void $publishStats(uint64 collectedTick, ::std::vector<::ScriptStat> const& stats);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
