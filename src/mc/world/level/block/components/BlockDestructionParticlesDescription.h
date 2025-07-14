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
    ::ll::UntypedStorage<8, 32> mUnkfae2e8;
    ::ll::UntypedStorage<1, 1>  mUnk290d49;
    ::ll::UntypedStorage<4, 4>  mUnk860978;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDestructionParticlesDescription& operator=(BlockDestructionParticlesDescription const&);
    BlockDestructionParticlesDescription(BlockDestructionParticlesDescription const&);
    BlockDestructionParticlesDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 2
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    // vIndex: 4
    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    // vIndex: 0
    virtual ~BlockDestructionParticlesDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockDestructionParticlesDescription(uchar particleNumber);

    MCNAPI BlockDestructionParticlesDescription(::std::string texture, ::TintMethod tintMethod, uchar particleNumber);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static bool postParseConstraint(
        ::Experiments const& experiments,
        ::Json::Value const& componentJson,
        ::SemVersion const&  jsonVersion
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uchar const& DEFAULT_NON_CUBE_PARTICLE_COUNT();

    MCNAPI static uchar const& DEFAULT_PARTICLE_COUNT();

    MCNAPI static ::std::string const& NameID();

    MCNAPI static ::std::string const& ParticleCountID();

    MCNAPI static ::std::string const& SchemaID();

    MCNAPI static ::std::string const& TextureID();

    MCNAPI static ::std::string const& TintMethodID();

    MCNAPI static ::SemVersion const& Version1_21_70();

    MCNAPI static ::SemVersion const& Version1_21_90();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uchar particleNumber);

    MCNAPI void* $ctor(::std::string texture, ::TintMethod tintMethod, uchar particleNumber);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getName() const;

    MCNAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
