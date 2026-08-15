#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/lists/ExternalServerWorldError.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class IExternalServerFile;
class ProfanityContext;
class ServerLocator;
struct NetworkWorldInfo;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace World {

class ExternalServerWorldList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IExternalServerFile>> mExternalServerFile;
    ::ll::TypedStorage<8, 8, ::ServerLocator&>                                   mServerLocator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>> mProfanityContext;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkWorldInfo>>                 mExternalServerWorldList;
    ::ll::TypedStorage<8, 8, double>                                             mLastUpdateMs;
    ::ll::TypedStorage<1, 1, bool>                                               mIsDirtyOperation;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mListSubscribers;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalServerWorldList& operator=(ExternalServerWorldList const&);
    ExternalServerWorldList(ExternalServerWorldList const&);
    ExternalServerWorldList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExternalServerWorldList(
        ::Bedrock::NotNullNonOwnerPtr<::IExternalServerFile> externalServerFile,
        ::ServerLocator&                                     serverLocator,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>    profanityContext
    );

    MCAPI void _refreshWorlds();

    MCAPI ::nonstd::expected<int, ::World::ExternalServerWorldError>
    addExternalServerWorld(::std::string const& name, ::std::string const& address, int port);

    MCAPI ::std::optional<::World::ExternalServerWorldError>
    editExternalServerWorld(int id, ::std::string const& name, ::std::string const& address, int port);

    MCAPI ::std::optional<::NetworkWorldInfo> getWorld(::std::string const& id);

    MCAPI ::std::optional<::World::ExternalServerWorldError> removeExternalServerWorld(int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IExternalServerFile> externalServerFile,
        ::ServerLocator&                                     serverLocator,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>    profanityContext
    );
    // NOLINTEND
};

} // namespace World
