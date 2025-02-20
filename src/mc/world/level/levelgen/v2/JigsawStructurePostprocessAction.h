#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
class JigsawStructureElementRegistry;
class ServerLevel;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class JigsawStructurePostprocessAction : public ::IRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc35f4a;
    ::ll::UntypedStorage<4, 12> mUnk5bb3c3;
    ::ll::UntypedStorage<4, 24> mUnk3e6c5e;
    ::ll::UntypedStorage<1, 1>  mUnkad06aa;
    ::ll::UntypedStorage<1, 1>  mUnk6a3d2d;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructurePostprocessAction& operator=(JigsawStructurePostprocessAction const&);
    JigsawStructurePostprocessAction(JigsawStructurePostprocessAction const&);
    JigsawStructurePostprocessAction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void execute(::ServerLevel& level, ::Dimension& dimension) /*override*/;

    // vIndex: 2
    virtual void serialize(::CompoundTag& tag) /*override*/;

    // vIndex: 0
    virtual ~JigsawStructurePostprocessAction() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::JigsawStructurePostprocessAction>
    load(::CompoundTag const& tag, ::JigsawStructureElementRegistry const& elementReg);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::cereal::ReflectionCtx>& mCerealContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::ServerLevel& level, ::Dimension& dimension);

    MCAPI void $serialize(::CompoundTag& tag);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
