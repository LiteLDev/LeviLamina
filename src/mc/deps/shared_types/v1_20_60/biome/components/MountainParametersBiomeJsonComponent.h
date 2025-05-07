#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct MountainParametersBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // MountainParametersBiomeJsonComponent inner types declare
    // clang-format off
    struct SteepMaterial;
    struct TopSlideSettings;
    // clang-format on

    // MountainParametersBiomeJsonComponent inner types define
    struct SteepMaterial {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 104> mUnkfaeed2;
        ::ll::UntypedStorage<1, 2>   mUnkee83ea;
        ::ll::UntypedStorage<1, 2>   mUnkc86c61;
        ::ll::UntypedStorage<1, 2>   mUnk12935d;
        ::ll::UntypedStorage<1, 2>   mUnk5e5ce6;
        // NOLINTEND

    public:
        // prevent constructor by default
        SteepMaterial& operator=(SteepMaterial const&);
        SteepMaterial();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI SteepMaterial(::SharedTypes::v1_20_60::MountainParametersBiomeJsonComponent::SteepMaterial const&);

        MCNAPI ~SteepMaterial();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::SharedTypes::v1_20_60::MountainParametersBiomeJsonComponent::SteepMaterial const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct TopSlideSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk99c314;
        // NOLINTEND

    public:
        // prevent constructor by default
        TopSlideSettings& operator=(TopSlideSettings const&);
        TopSlideSettings(TopSlideSettings const&);
        TopSlideSettings();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120> mUnk3ec318;
    ::ll::UntypedStorage<1, 2>   mUnk576525;
    // NOLINTEND

public:
    // prevent constructor by default
    MountainParametersBiomeJsonComponent& operator=(MountainParametersBiomeJsonComponent const&);
    MountainParametersBiomeJsonComponent(MountainParametersBiomeJsonComponent const&);
    MountainParametersBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MountainParametersBiomeJsonComponent() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
