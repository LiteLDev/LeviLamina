#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace Editor::Structures::PUVLoader::v0 { struct StructureMetadata; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Structures::PUVLoader::v1 {

struct StructureMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk9f8764;
    ::ll::UntypedStorage<8, 32> mUnk7a8b37;
    ::ll::UntypedStorage<8, 24> mUnk1cfe7a;
    ::ll::UntypedStorage<8, 32> mUnk33028b;
    ::ll::UntypedStorage<8, 32> mUnkc58144;
    ::ll::UntypedStorage<8, 32> mUnk45df57;
    ::ll::UntypedStorage<8, 32> mUnkd5ef95;
    ::ll::UntypedStorage<8, 32> mUnk28fb72;
    ::ll::UntypedStorage<1, 1>  mUnk7fbd71;
    ::ll::UntypedStorage<4, 12> mUnk56c3e8;
    ::ll::UntypedStorage<4, 12> mUnk21c1e5;
    ::ll::UntypedStorage<4, 12> mUnkd34611;
    ::ll::UntypedStorage<4, 16> mUnk12d899;
    ::ll::UntypedStorage<4, 4>  mUnk303bd9;
    ::ll::UntypedStorage<1, 1>  mUnk4a932b;
    ::ll::UntypedStorage<4, 4>  mUnkf7d26d;
    ::ll::UntypedStorage<4, 4>  mUnkf9ac4d;
    ::ll::UntypedStorage<4, 4>  mUnk743c0c;
    ::ll::UntypedStorage<8, 40> mUnkead155;
    ::ll::UntypedStorage<8, 40> mUnkf0757c;
    ::ll::UntypedStorage<8, 40> mUnk50bc91;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureMetadata();

    MCNAPI StructureMetadata(::Editor::Structures::PUVLoader::v1::StructureMetadata const&);

    MCNAPI StructureMetadata(::Editor::Structures::PUVLoader::v1::StructureMetadata&&);

    MCNAPI ::Editor::Structures::PUVLoader::v1::StructureMetadata&
    operator=(::Editor::Structures::PUVLoader::v1::StructureMetadata&&);

    MCNAPI ::Editor::Structures::PUVLoader::v1::StructureMetadata&
    operator=(::Editor::Structures::PUVLoader::v1::StructureMetadata const&);

    MCNAPI ~StructureMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Editor::Structures::PUVLoader::v1::StructureMetadata
    upgradeFromV0(::Editor::Structures::PUVLoader::v0::StructureMetadata&& legacy);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Editor::Structures::PUVLoader::v1::StructureMetadata const&);

    MCNAPI void* $ctor(::Editor::Structures::PUVLoader::v1::StructureMetadata&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Structures::PUVLoader::v1
