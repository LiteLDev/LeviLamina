#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"

namespace Editor::Services {

class PersistenceItem : public ::EnableGetWeakRef<::Editor::Services::PersistenceItem>,
                        public ::std::enable_shared_from_this<::Editor::Services::PersistenceItem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd90b71;
    ::ll::UntypedStorage<8, 32> mUnk30d710;
    ::ll::UntypedStorage<8, 32> mUnkb1f01f;
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
    MCNAPI ::std::string const& fetchItemPayload();

    MCNAPI void save();
    // NOLINTEND
};

} // namespace Editor::Services
