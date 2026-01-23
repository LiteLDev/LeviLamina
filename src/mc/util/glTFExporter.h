#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
namespace glTF { struct Accessor; }
namespace glTF { struct Buffer; }
namespace glTF { struct BufferView; }
namespace glTF { struct Image; }
namespace glTF { struct Material; }
namespace glTF { struct Mesh; }
namespace glTF { struct Node; }
namespace glTF { struct Sampler; }
namespace glTF { struct Scene; }
namespace glTF { struct Texture; }
// clang-format on

class glTFExporter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk11be40;
    ::ll::UntypedStorage<8, 32>  mUnk7da04e;
    ::ll::UntypedStorage<8, 32>  mUnk1ecdf7;
    ::ll::UntypedStorage<8, 32>  mUnk6d52d6;
    ::ll::UntypedStorage<8, 32>  mUnk777b5f;
    ::ll::UntypedStorage<1, 1>   mUnkfc1c68;
    ::ll::UntypedStorage<8, 24>  mUnkb182ab;
    ::ll::UntypedStorage<8, 24>  mUnk818856;
    ::ll::UntypedStorage<8, 160> mUnkf04c76;
    ::ll::UntypedStorage<8, 24>  mUnk77f9c5;
    ::ll::UntypedStorage<8, 24>  mUnk671a36;
    ::ll::UntypedStorage<8, 24>  mUnk6f71eb;
    ::ll::UntypedStorage<8, 24>  mUnk7194fe;
    ::ll::UntypedStorage<8, 24>  mUnk562094;
    ::ll::UntypedStorage<8, 24>  mUnkb88a89;
    ::ll::UntypedStorage<8, 24>  mUnk68e147;
    ::ll::UntypedStorage<8, 24>  mUnk92f774;
    ::ll::UntypedStorage<8, 24>  mUnkfcdcd7;
    ::ll::UntypedStorage<8, 24>  mUnk6233e3;
    ::ll::UntypedStorage<8, 24>  mUnk4be391;
    ::ll::UntypedStorage<4, 4>   mUnk398e4e;
    ::ll::UntypedStorage<8, 24>  mUnkd71ebe;
    ::ll::UntypedStorage<8, 80>  mUnk2d25e2;
    // NOLINTEND

public:
    // prevent constructor by default
    glTFExporter& operator=(glTFExporter const&);
    glTFExporter(glTFExporter const&);
    glTFExporter();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~glTFExporter() = default;
#else // LL_PLAT_C
    virtual ~glTFExporter();
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C bool _hasMaterial(::std::string const& materialName);

    MCNAPI_C void _serialize(::Json::Value& root);

    MCNAPI_C void _serializeBinaryData(::Json::Value& glTF);

    MCNAPI_C void _serializeSampler(::Json::Value& root, ::glTF::Sampler const& sampler);

    MCNAPI_C int addAccessor(::glTF::Accessor& accessor);

    MCNAPI_C uint64 addBinaryBuffer(::Core::Path const& filePath, uchar const* data, uint64 size);

    MCNAPI_C int addBuffer(::glTF::Buffer& buffer);

    MCNAPI_C int addBufferView(::glTF::BufferView& bufferView);

    MCNAPI_C int addImage(::glTF::Image& image);

    MCNAPI_C int addMaterial(::glTF::Material& material);

    MCNAPI_C int addMesh(::glTF::Mesh& mesh);

    MCNAPI_C int addNode(::glTF::Node& node);

    MCNAPI_C int addSampler(::glTF::Sampler& sampler);

    MCNAPI_C int addScene(::glTF::Scene& scene);

    MCNAPI_C int addTexture(::glTF::Texture& texture);

    MCNAPI_C glTFExporter(::Core::Path const& folderPath, ::std::string const& modelName);

    MCNAPI_C void serialize();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& BINARY_EXTENSION();

    MCNAPI_C static ::std::string_view const& GLB_BUFFER_URI();

    MCNAPI static ::std::string_view const& GLB_EXTENSION();

    MCNAPI static ::std::string_view const& GLTF_EXTENSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Core::Path const& folderPath, ::std::string const& modelName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
