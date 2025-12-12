#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace Editor::Services {

class PersistenceItem : public ::EnableGetWeakRef<::Editor::Services::PersistenceItem>,
                        public ::std::enable_shared_from_this<::Editor::Services::PersistenceItem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4eff3b;
    ::ll::UntypedStorage<8, 32> mUnkf6b9f8;
    ::ll::UntypedStorage<8, 32> mUnkd8855d;
    ::ll::UntypedStorage<1, 1>  mUnk454b40;
    ::ll::UntypedStorage<8, 8>  mUnk35a7d4;
    ::ll::UntypedStorage<8, 48> mUnk2c1fe8;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceItem& operator=(PersistenceItem const&);
    PersistenceItem(PersistenceItem const&);
    PersistenceItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> _getFilePath();

    MCNAPI ::std::string _loadItem();

    MCNAPI ::std::string fetchItemPayload();

    MCNAPI ::Bedrock::PubSub::Subscription
    onValueChange(::std::function<void(::Editor::Services::PersistenceItem const&)> callback);

    MCNAPI void save();

    MCNAPI ~PersistenceItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
