#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/ParserBase.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
struct FeatureParserContext;
namespace FeatureLoading { struct FeatureRootParseContext; }
namespace JsonUtil { class EmptyClass; }
namespace Puv { class Input; }
namespace Puv { class LoadResultAny; }
// clang-format on

class FeatureParser : public ::Puv::ParserBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::FeatureParserContext&> mContext;
    ::ll::TypedStorage<8, 8, ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FeatureLoading::FeatureRootParseContext>> const&> mSchema;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureParser& operator=(FeatureParser const&);
    FeatureParser(FeatureParser const&);
    FeatureParser();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Puv::LoadResultAny doParse(::Puv::Input const& input) const /*override*/;

    // vIndex: 0
    virtual ~FeatureParser() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Puv::LoadResultAny $doParse(::Puv::Input const& input) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
