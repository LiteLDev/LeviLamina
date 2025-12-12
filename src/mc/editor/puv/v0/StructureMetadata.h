#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace Puv { class Input; }
namespace Puv { class Logger; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Structures::PUVLoader::v0 {

struct StructureMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka1b948;
    ::ll::UntypedStorage<8, 48> mUnkd0c8f4;
    ::ll::UntypedStorage<8, 32> mUnkcaf736;
    ::ll::UntypedStorage<8, 24> mUnk4f896c;
    ::ll::UntypedStorage<8, 32> mUnka62136;
    ::ll::UntypedStorage<8, 32> mUnk406a01;
    ::ll::UntypedStorage<8, 32> mUnkd2f24a;
    ::ll::UntypedStorage<8, 32> mUnk5613bb;
    ::ll::UntypedStorage<8, 32> mUnk6d67a2;
    ::ll::UntypedStorage<1, 1>  mUnk1106dc;
    ::ll::UntypedStorage<4, 12> mUnk3ededd;
    ::ll::UntypedStorage<4, 12> mUnk818894;
    ::ll::UntypedStorage<4, 16> mUnka4846c;
    ::ll::UntypedStorage<4, 16> mUnk9d8a51;
    ::ll::UntypedStorage<4, 4>  mUnk4d0060;
    ::ll::UntypedStorage<1, 1>  mUnkf641d5;
    ::ll::UntypedStorage<4, 4>  mUnk4e091a;
    ::ll::UntypedStorage<4, 4>  mUnka99d0e;
    ::ll::UntypedStorage<4, 4>  mUnkef3cba;
    ::ll::UntypedStorage<8, 40> mUnkcc710e;
    ::ll::UntypedStorage<8, 40> mUnk871c1c;
    ::ll::UntypedStorage<8, 40> mUnk6df440;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureMetadata();

    MCNAPI StructureMetadata(::Editor::Structures::PUVLoader::v0::StructureMetadata&&);

    MCNAPI StructureMetadata(::Editor::Structures::PUVLoader::v0::StructureMetadata const&);

    MCNAPI ::Editor::Structures::PUVLoader::v0::StructureMetadata&
    operator=(::Editor::Structures::PUVLoader::v0::StructureMetadata&&);

    MCNAPI ::Editor::Structures::PUVLoader::v0::StructureMetadata&
    operator=(::Editor::Structures::PUVLoader::v0::StructureMetadata const&);

    MCNAPI ~StructureMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Editor::Structures::PUVLoader::v0::StructureMetadata
    parseLegacy(::Puv::Input const& input, ::Puv::Logger& logger, ::gsl::not_null<::cereal::ReflectionCtx const*> ctx);
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

    MCNAPI void* $ctor(::Editor::Structures::PUVLoader::v0::StructureMetadata&&);

    MCNAPI void* $ctor(::Editor::Structures::PUVLoader::v0::StructureMetadata const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Structures::PUVLoader::v0
