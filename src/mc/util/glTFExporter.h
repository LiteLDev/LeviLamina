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
    ::ll::UntypedStorage<8, 32>  mUnk6b2b52;
    ::ll::UntypedStorage<8, 32>  mUnk8c608f;
    ::ll::UntypedStorage<8, 32>  mUnk8616b2;
    ::ll::UntypedStorage<8, 32>  mUnk120142;
    ::ll::UntypedStorage<8, 32>  mUnk9bc0ba;
    ::ll::UntypedStorage<1, 1>   mUnkfc1c68;
    ::ll::UntypedStorage<8, 24>  mUnk4999c3;
    ::ll::UntypedStorage<8, 24>  mUnkf19852;
    ::ll::UntypedStorage<8, 160> mUnkf04c76;
    ::ll::UntypedStorage<8, 24>  mUnk3cbc3b;
    ::ll::UntypedStorage<8, 24>  mUnk8e959c;
    ::ll::UntypedStorage<8, 24>  mUnk81fc79;
    ::ll::UntypedStorage<8, 24>  mUnk455823;
    ::ll::UntypedStorage<8, 24>  mUnkc5fffb;
    ::ll::UntypedStorage<8, 24>  mUnk9a4c47;
    ::ll::UntypedStorage<8, 24>  mUnk179a42;
    ::ll::UntypedStorage<8, 24>  mUnka25cfc;
    ::ll::UntypedStorage<8, 24>  mUnk7de0c4;
    ::ll::UntypedStorage<8, 24>  mUnkb05d1a;
    ::ll::UntypedStorage<8, 24>  mUnka8255b;
    ::ll::UntypedStorage<4, 4>   mUnk398e4e;
    ::ll::UntypedStorage<8, 24>  mUnk35d773;
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

    MCNAPI_C void serialize();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::string_view const& BINARY_EXTENSION();

    MCNAPI_C static ::std::string_view const& GLB_BUFFER_URI();

    MCNAPI_C static ::std::string_view const& GLB_EXTENSION();

    MCNAPI_C static ::std::string_view const& GLTF_EXTENSION();
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
