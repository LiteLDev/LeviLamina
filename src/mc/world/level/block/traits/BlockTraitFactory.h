#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"

// auto generated forward declare list
// clang-format off
namespace BlockTrait { class ITrait; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockTraitFactory : public ::Factory<::BlockTrait::ITrait> {
public:
    // BlockTraitFactory inner types declare
    // clang-format off
    struct TraitMetadata;
    // clang-format on

    // BlockTraitFactory inner types define
    struct TraitMetadata {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkb113c1;
        ::ll::UntypedStorage<8, 24> mUnkeca172;
        ::ll::UntypedStorage<8, 32> mUnkbe701a;
        // NOLINTEND

    public:
        // prevent constructor by default
        TraitMetadata& operator=(TraitMetadata const&);
        TraitMetadata(TraitMetadata const&);
        TraitMetadata();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::BlockTraitFactory::TraitMetadata& operator=(::BlockTraitFactory::TraitMetadata&&);

        MCAPI ~TraitMetadata();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk6fcb72;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTraitFactory& operator=(BlockTraitFactory const&);
    BlockTraitFactory(BlockTraitFactory const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockTraitFactory();

    MCAPI ::std::unique_ptr<::BlockTrait::ITrait>
    createTrait(::std::string const& name, ::cereal::ReflectionCtx const& ctx) const;

    MCAPI ~BlockTraitFactory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockTraitFactory* contextInstanceIfAvailable(::cereal::ReflectionCtx const& ctx);

    MCAPI static void registerAllTraits(::cereal::ReflectionCtx& ctx);

    MCAPI static ::BlockTraitFactory& setupContextInstanceIfRequired(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
