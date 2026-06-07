#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/container/list.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class DocumentOptions; }
namespace Bedrock::JSONObject { class MemoryPage; }
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class NodeBase; }
namespace Bedrock::JSONObject { class OutputOptions; }
namespace Bedrock::JSONObject { class ParseResult; }
namespace Bedrock::JSONObject { class StringNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class Document {
public:
    // Document inner types declare
    // clang-format off
    struct AllocatedResources;
    // clang-format on

    // Document inner types define
    struct AllocatedResources {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk99a043;
        ::ll::UntypedStorage<8, 8>  mUnk6a8ba6;
        ::ll::UntypedStorage<8, 8>  mUnkc51133;
        ::ll::UntypedStorage<8, 8>  mUnkd325ef;
        ::ll::UntypedStorage<8, 24> mUnka20474;
        ::ll::UntypedStorage<8, 24> mUnkfd6681;
        // NOLINTEND

    public:
        // prevent constructor by default
        AllocatedResources& operator=(AllocatedResources const&);
        AllocatedResources(AllocatedResources const&);
        AllocatedResources();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI explicit AllocatedResources(::Bedrock::JSONObject::MemoryPage* owningMemoryPage);
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(::Bedrock::JSONObject::MemoryPage* owningMemoryPage);
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk45fb0b;
    ::ll::UntypedStorage<8, 16> mUnk7bfcbb;
    ::ll::UntypedStorage<8, 8>  mUnkb7a8b7;
    ::ll::UntypedStorage<8, 8>  mUnkf31ba7;
    ::ll::UntypedStorage<8, 8>  mUnk51b6a2;
    ::ll::UntypedStorage<8, 8>  mUnk9edefa;
    ::ll::UntypedStorage<4, 4>  mUnkfc6168;
    // NOLINTEND

public:
    // prevent constructor by default
    Document& operator=(Document const&);
    Document(Document const&);
    Document();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Document(::Bedrock::JSONObject::DocumentOptions const& options);

    MCNAPI void* _acquireNode(
        ::Bedrock::Intrusive::
            list<::Bedrock::JSONObject::NodeBase, ::Bedrock::JSONObject::NodeBase, ::Bedrock::JSONObject::NodeBase>&
                freeList,
        uint64  size,
        uint64  alignment
    );

    MCNAPI void* _acquireStringBuffer(uint64 length, uint64& outCapacity);

    MCNAPI ::Bedrock::JSONObject::NodeBase* _createNode(::Bedrock::JSONObject::ValueWrapper const& value);

    MCNAPI ::Bedrock::JSONObject::MemoryPage& _getMemoryPage();

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::JSONObject::MemoryPage* _getMemoryPageAt(uint index);
#endif

    MCNAPI void _initialize();

    MCNAPI void _releaseNode(::Bedrock::JSONObject::NodeBase& node);

#ifdef LL_PLAT_C
    MCNAPI void _releaseStringBuffer(::Bedrock::JSONObject::StringNode& node);
#endif

    MCNAPI void _setRoot(::Bedrock::JSONObject::NodeBase* base);

    MCNAPI ::Bedrock::JSONObject::ParseResult const& loadString(::std::string_view str);

    MCNAPI void reset();

    MCNAPI void setOptions(::Bedrock::JSONObject::DocumentOptions const& options);

    MCNAPI ::Bedrock::JSONObject::Node* setRoot(::Bedrock::JSONObject::ValueWrapper const& value);

#ifdef LL_PLAT_C
    MCNAPI void writeStream(::std::ostream& out, ::Bedrock::JSONObject::OutputOptions const& outputOptions) const;

    MCNAPI void writeString(::std::string& dest, ::Bedrock::JSONObject::OutputOptions const& outputOptions) const;
#endif

    MCNAPI ~Document();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::JSONObject::DocumentOptions const& options);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
