#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace Editor::Network {

struct ReplicatedObjectInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkb15a29;
    ::ll::UntypedStorage<4, 4>  mUnk96c5e5;
    ::ll::UntypedStorage<8, 32> mUnk13ce7c;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplicatedObjectInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReplicatedObjectInfo(::Editor::Network::ReplicatedObjectInfo&& other);

    MCNAPI ReplicatedObjectInfo(::Editor::Network::ReplicatedObjectInfo const& other);

    MCNAPI ReplicatedObjectInfo(::HashedString id, uint typeHash, ::std::string&& data);

    MCNAPI void operator=(::Editor::Network::ReplicatedObjectInfo&& other);

    MCNAPI void operator=(::Editor::Network::ReplicatedObjectInfo const& other);

    MCNAPI bool operator==(::Editor::Network::ReplicatedObjectInfo const& other) const;

    MCNAPI ~ReplicatedObjectInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::ReplicatedObjectInfo&& other);

    MCNAPI void* $ctor(::Editor::Network::ReplicatedObjectInfo const& other);

    MCNAPI void* $ctor(::HashedString id, uint typeHash, ::std::string&& data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Network
