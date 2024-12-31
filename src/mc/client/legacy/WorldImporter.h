#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/legacy/ImportStatus.h"
#include "mc/client/legacy/RetrieveStatus.h"
#include "mc/util/CallbackTokenContext.h"

// auto generated forward declare list
// clang-format off
struct ImportResult;
struct LegacyWorldInfo;
namespace Core { class Path; }
namespace Core { class Result; }
namespace Social { class User; }
// clang-format on

namespace Legacy {

class WorldImporter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk68589d;
    ::ll::UntypedStorage<8, 16> mUnk16a716;
    ::ll::UntypedStorage<8, 24> mUnk30a91a;
    ::ll::UntypedStorage<1, 1>  mUnk270ed2;
    ::ll::UntypedStorage<8, 80> mUnk6e9ed1;
    ::ll::UntypedStorage<8, 8>  mUnk550451;
    ::ll::UntypedStorage<8, 16> mUnk7cbd91;
    ::ll::UntypedStorage<4, 4>  mUnke18422;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldImporter& operator=(WorldImporter const&);
    WorldImporter(WorldImporter const&);
    WorldImporter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldImporter() = 0;

    // vIndex: 1
    virtual void deleteWorld(::std::shared_ptr<::Social::User>, ::std::string const&, ::std::function<void()>);

    // vIndex: 2
    virtual ::Core::Result _createWorld(::Core::Path const&, uint64 const);

    // vIndex: 3
    virtual void _setupImport(::Core::Path const&);

    // vIndex: 4
    virtual void
        _doRetrieve(::std::shared_ptr<::Social::User>, ::std::shared_ptr<::CallbackTokenContext<::std::function<void(::Legacy::RetrieveStatus)>>>) = 0;

    // vIndex: 5
    virtual void
    _doImport(::std::shared_ptr<::Social::User>, ::LegacyWorldInfo const&, ::Core::Path const&, ::std::shared_ptr<::CallbackTokenContext<::std::function<void(::Legacy::ImportStatus, float, ::std::shared_ptr<::ImportResult>)>>>) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Legacy
