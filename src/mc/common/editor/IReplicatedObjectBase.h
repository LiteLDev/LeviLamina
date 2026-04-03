#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"

namespace Editor {

class IReplicatedObjectBase : public ::EnableGetWeakRef<::Editor::IReplicatedObjectBase> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnke8b717;
    ::ll::UntypedStorage<8, 8>  mUnkbfca4c;
    ::ll::UntypedStorage<8, 8>  mUnk2f6265;
    ::ll::UntypedStorage<8, 8>  mUnk4a49bb;
    ::ll::UntypedStorage<8, 48> mUnk763b93;
    // NOLINTEND

public:
    // prevent constructor by default
    IReplicatedObjectBase& operator=(IReplicatedObjectBase const&);
    IReplicatedObjectBase(IReplicatedObjectBase const&);
    IReplicatedObjectBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IReplicatedObjectBase() = default;

    virtual bool load(::std::string&&) = 0;

    virtual bool load(::std::string_view) = 0;

    virtual ::std::string save() const = 0;

    virtual uint getTypeHash() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
