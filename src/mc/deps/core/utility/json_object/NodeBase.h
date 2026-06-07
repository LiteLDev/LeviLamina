#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/list_standard_operations.h"
#include "mc/deps/core/utility/json_object/JSONType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Document; }
namespace Bedrock::JSONObject { class MemoryPage; }
namespace Bedrock::JSONObject { class Node; }
// clang-format on

namespace Bedrock::JSONObject {

class NodeBase : public ::Bedrock::Intrusive::
                     list_standard_operations<::Bedrock::JSONObject::NodeBase, ::Bedrock::JSONObject::NodeBase> {
public:
    // NodeBase inner types declare
    // clang-format off
    class Offset;
    // clang-format on

    // NodeBase inner types define
    class Offset {
    public:
        // member variables
        // NOLINTBEGIN
        union {
            ::ll::UntypedStorage<2, 2> mUnkd0ad5a;
            ::ll::UntypedStorage<2, 2> mUnk5228a0;
        };
        // NOLINTEND

    public:
        // prevent constructor by default
        Offset& operator=(Offset const&);
        Offset(Offset const&);
        Offset();
    };

public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::UntypedStorage<2, 2> mUnke7d0a5;
            ::ll::UntypedStorage<2, 2> mUnkab13d6;
            ::ll::UntypedStorage<2, 2> mUnk78a983;
            ::ll::UntypedStorage<1, 1> mUnk58fbd6;
            ::ll::UntypedStorage<1, 1> mUnkfe6bdf;
        };
        ::ll::UntypedStorage<8, 8> mUnk58ae72;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    NodeBase& operator=(NodeBase const&);
    NodeBase(NodeBase const&);
    NodeBase();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI NodeBase(::Bedrock::JSONObject::MemoryPage* owningPage, ::Bedrock::JSONObject::JSONType type);
#endif

    MCNAPI ::Bedrock::JSONObject::NodeBase const&
    _getBase(::Bedrock::JSONObject::NodeBase::Offset offset, uchar page) const;

    MCNAPI void
    _setBase(::Bedrock::JSONObject::NodeBase& to, ::Bedrock::JSONObject::NodeBase::Offset& offset, uchar& page);

#ifdef LL_PLAT_C
    MCNAPI void _swapCollectionMembership(::Bedrock::JSONObject::NodeBase& other);

    MCNAPI ::Bedrock::JSONObject::Document& getOwningDocument() const;

    MCNAPI ::Bedrock::JSONObject::Node const* toNode() const;

    MCNAPI ::Bedrock::JSONObject::Node* toNode();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Bedrock::JSONObject::MemoryPage* owningPage, ::Bedrock::JSONObject::JSONType type);
#endif
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
