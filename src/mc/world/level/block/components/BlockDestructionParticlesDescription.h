#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class Experiments;
class SemVersion;
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockDestructionParticlesDescription
: public ::NetworkedBlockComponentDescription<::BlockDestructionParticlesDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mTexture;
    ::ll::TypedStorage<1, 1, ::TintMethod>   mTintMethod;
    ::ll::TypedStorage<4, 4, int>            mParticleCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static bool postParseConstraint(
        ::Experiments const& experiments,
        ::Json::Value const& componentJson,
        ::SemVersion const&  jsonVersion
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;

    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCAPI void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
