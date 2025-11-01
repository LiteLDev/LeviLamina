#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/StorageResult.h"
#include "mc/util/CallbackTokenContext.h"

// auto generated forward declare list
// clang-format off
class CallbackToken;
namespace Core { class RemoteStorageManifest; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class RemoteStorageProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4f2a23;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteStorageProvider& operator=(RemoteStorageProvider const&);
    RemoteStorageProvider(RemoteStorageProvider const&);
    RemoteStorageProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RemoteStorageProvider() = default;

    // vIndex: 1
    virtual void shutdown();

    // vIndex: 2
    virtual ::std::string const& getWorldsPrefix() const = 0;

    // vIndex: 3
    virtual ::std::string encodeWorldName(::std::string const&) = 0;

    // vIndex: 4
    virtual ::std::string encodeFileName(::std::string const&) = 0;

    // vIndex: 5
    virtual float getSyncProgress() = 0;

    // vIndex: 6
    virtual void tick() = 0;

    // vIndex: 7
    virtual void onAppSuspend() = 0;

    // vIndex: 8
    virtual void onAppResume() = 0;

    // vIndex: 9
    virtual void onSignOut() = 0;

    // vIndex: 10
    virtual ::CallbackToken
        onSignIn(::std::shared_ptr<::CallbackTokenContext<::std::function<void(::Core::Result)>>>) = 0;

    // vIndex: 11
    virtual ::CallbackToken deleteContainer(
        ::std::shared_ptr<::CallbackTokenContext<::std::function<void(::Core::Result)>>>,
        ::std::string const&
    ) = 0;

    // vIndex: 12
    virtual ::CallbackToken commit(
        ::std::shared_ptr<::CallbackTokenContext<::std::function<void(::Core::Result, ::Core::StorageResult)>>>,
        ::std::string const&,
        ::std::set<::std::string> const&,
        ::std::set<::std::string>&,
        ::std::set<::std::string>&,
        bool
    ) = 0;

    // vIndex: 13
    virtual ::CallbackToken sync(
        ::std::string const&,
        ::std::string const&,
        ::std::shared_ptr<::CallbackTokenContext<::std::function<void(::Core::Result)>>>,
        ::std::function<void(::std::string const&, bool)>
    ) = 0;

    // vIndex: 14
    virtual ::CallbackToken syncMeta(
        ::std::string const&,
        ::std::string const&,
        ::std::shared_ptr<::CallbackTokenContext<::std::function<void(::Core::Result)>>>
    ) = 0;

    // vIndex: 15
    virtual ::CallbackToken syncContainerManifest(
        ::std::string const&,
        ::std::string const&,
        ::std::shared_ptr<::CallbackTokenContext<::std::function<void(::Core::Result)>>>
    ) = 0;

    // vIndex: 16
    virtual ::Core::RemoteStorageManifest getManifest(::std::string const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
