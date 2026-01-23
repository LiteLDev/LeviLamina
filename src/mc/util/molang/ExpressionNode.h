#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/molang/MolangParseConfig.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/util/MolangCompileResult.h"
#include "mc/util/MolangQueryFunctionReturnType.h"
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class HashedString;
class MaterialVariants;
class RenderParams;
struct ExpressionQueries;
struct MolangClientTextureSet;
struct MolangDataDrivenGeometry;
struct MolangParseConfig;
struct MolangQueryFunction;
struct MolangScriptArg;
namespace Json { class Value; }
namespace Molang::details { class IComplexExpression; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class ExpressionNode {
public:
    // ExpressionNode inner types declare
    // clang-format off
    struct ResourceReference;
    // clang-format on

    // ExpressionNode inner types define
    struct ResourceReference {
    public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
        ::ll::UntypedStorage<8, 88> mUnkdeb2d8;
#else // LL_PLAT_C
        ::ll::UntypedStorage<8, 96> mUnkdeb2d8;
#endif
        ::ll::UntypedStorage<2, 2> mUnk80cca4;
        ::ll::UntypedStorage<1, 1> mUnk749abb;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ResourceReference();

        MCNAPI_C explicit ResourceReference(::MolangDataDrivenGeometry const& geometry);

        MCNAPI_C explicit ResourceReference(::MaterialVariants const& matVariants);

        MCNAPI_C explicit ResourceReference(::MolangClientTextureSet const& textureSet);

        MCNAPI_C ~ResourceReference();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_C void* $ctor();

        MCNAPI_C void* $ctor(::MolangDataDrivenGeometry const& geometry);

        MCNAPI_C void* $ctor(::MaterialVariants const& matVariants);

        MCNAPI_C void* $ctor(::MolangClientTextureSet const& textureSet);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

    using GetParticleTintFunc = ::std::function<::mce::Color(::Block const&, ::BlockSource&, ::BlockPos const&)>;

    using IComplexExpression = ::Molang::details::IComplexExpression;

    using MissingResourceSet =
        ::brstd::flat_set<::HashedString, ::std::less<::HashedString>, ::std::vector<::HashedString>>;

    using ResourceTable = ::std::unordered_map<::HashedString, ::ExpressionNode::ResourceReference>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::variant<::std::unique_ptr<::Molang::details::IComplexExpression>, float>> mImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpressionNode();

public:
    ExpressionNode(
        std::string const&                expression,
        ::MolangVersion                   molangVersion,
        ::gsl::span<::HashedString const> querySetID
    )
    : ExpressionNode(expression, molangVersion) {
        MolangParseConfig config;
        config.mVersion          = molangVersion;
        config.mAllowedQuerySets = querySetID;
        parse(expression, config);
    }

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExpressionNode(::ExpressionNode&&);

    MCAPI_C explicit ExpressionNode(::MaterialVariants const& materialVariants);

    MCAPI ExpressionNode(::ExpressionNode const& rhs);

    MCAPI ExpressionNode(::std::string const& expression, ::MolangVersion molangVersion);

    MCAPI_C ExpressionNode(char const* expression, ::MolangVersion molangVersion);

    MCAPI ExpressionNode(::Json::Value const& value, ::MolangParseConfig const& config);

    MCAPI ExpressionNode(::MolangScriptArg const& value, ::ExpressionOp op);

    MCAPI float evalAsFloat(::RenderParams& renderParams) const;

    MCAPI ::MolangScriptArg const& evalGeneric(::RenderParams& renderParams) const;

    MCAPI ::std::string getExpressionString() const;

    MCAPI_C bool hasVariableAssignments() const;

    MCAPI ::MolangCompileResult link();

    MCAPI ::ExpressionNode& operator=(::ExpressionNode&&);

    MCAPI ::ExpressionNode& operator=(::ExpressionNode const& rhs);

    MCAPI ::ExpressionNode& operator=(float value);

    MCAPI bool parse(::std::string_view expression, ::MolangParseConfig const& config);

    MCAPI_C void
    replaceArrayVariables(::std::unordered_map<::HashedString, ::ExpressionNode>& dataMap, bool compileProgram);

    MCAPI ~ExpressionNode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _initializeMolangQueries(::ExpressionQueries&& queries);

    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI_S static void initializeMolang(::ExpressionQueries&& queries);

    MCAPI_C static ::std::function<
        ::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> const*
    queryFunctionAccessorFromString(
        ::HashedString const&            functionName,
        ::MolangVersion                  molangVersion,
        ::MolangQueryFunctionReturnType& functionReturnType,
        bool                             missingIsOkay_returnNullIfSo
    );

    MCAPI static ::MolangQueryFunction& registerQueryFunction(
        ::std::string_view queryFunctionName,
        ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> accessor,
        ::std::string_view                  documentation,
        ::MolangQueryFunctionReturnType     returnType,
        ::HashedString                      querySetIdentifier,
        uint64                              minArgumentCount,
        uint64                              maxArgumentCount,
        ::std::initializer_list<int> const& experiments
    );

    MCAPI static void
    unregisterQueryFunction(::std::string const& queryFunctionName, ::HashedString querySetIdentifier);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)>&
    _defaultUnknownQueryFunction();

    MCAPI static ::std::function<::mce::Color(::Block const&, ::BlockSource&, ::BlockPos const&)>&
    mGetParticleTintFunc();

    MCAPI static ::std::unordered_multimap<::HashedString, ::MolangQueryFunction>& mQueryFunctionAccessors();

    MCAPI static ::std::unordered_map<::HashedString, ::std::unordered_set<::HashedString>>& mQuerySets();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();

    MCAPI void* $ctor(::ExpressionNode&&);

    MCAPI_C void* $ctor(::MaterialVariants const& materialVariants);

    MCAPI void* $ctor(::ExpressionNode const& rhs);

    MCAPI void* $ctor(::std::string const& expression, ::MolangVersion molangVersion);

    MCAPI_C void* $ctor(char const* expression, ::MolangVersion molangVersion);

    MCAPI void* $ctor(::Json::Value const& value, ::MolangParseConfig const& config);

    MCAPI void* $ctor(::MolangScriptArg const& value, ::ExpressionOp op);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
