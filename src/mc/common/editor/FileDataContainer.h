#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Structures::PUVLoader::v1 { struct StructureMetadata; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Structures::PUVLoader::CurrentVersion {

struct FileDataContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk78aae8;
    ::ll::UntypedStorage<8, 464> mUnk210e7b;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDataContainer& operator=(FileDataContainer const&);
    FileDataContainer(FileDataContainer const&);
    FileDataContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FileDataContainer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::std::optional<::Editor::Structures::PUVLoader::CurrentVersion::FileDataContainer> fromString(
        ::Puv::SlicedLoader<::Editor::Structures::PUVLoader::v1::StructureMetadata, nullptr_t, nullptr_t>& loader,
        ::std::string&                                                                                     jsonString,
        ::std::vector<::std::string>&                                                                      outErrors
    );

    MCNAPI static ::std::optional<::std::string>
    toString(::cereal::ReflectionCtx& ctx, ::Editor::Structures::PUVLoader::v1::StructureMetadata&& loaderMetadata);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Structures::PUVLoader::CurrentVersion
