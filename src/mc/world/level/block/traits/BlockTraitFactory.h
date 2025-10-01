#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/util/Factory.h"

// auto generated forward declare list
// clang-format off
class PackLoadRequirement;
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
        // TraitMetadata inner types define
        using Ctor = ::std::unique_ptr<::BlockTrait::ITrait> (*)();

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTrait::ITrait> (*)()> makeUnique;
        ::ll::TypedStorage<8, 24, ::std::vector<::PackLoadRequirement>>         requirements;
        ::ll::TypedStorage<8, 32, ::std::optional<::SemVersion>>                releasedMinFormatVersion;
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

    using RegisteredTraitsMap = ::std::unordered_map<::std::string, ::BlockTraitFactory::TraitMetadata>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::BlockTraitFactory::TraitMetadata>>
        mRegisteredTraits;
    // NOLINTEND

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
