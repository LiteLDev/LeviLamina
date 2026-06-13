#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/molang/IComplexExpression.h"
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
class Experiments;
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
namespace Molang::details { class SourceTree; }
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
        // prevent constructor by default
        ResourceReference& operator=(ResourceReference const&);
        ResourceReference(ResourceReference const&);
        ResourceReference();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI explicit ResourceReference(::MolangDataDrivenGeometry const& geometry);

        MCNAPI explicit ResourceReference(::MaterialVariants const& matVariants);

        MCNAPI explicit ResourceReference(::MolangClientTextureSet const& textureSet);
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(::MolangDataDrivenGeometry const& geometry);

        MCNAPI void* $ctor(::MaterialVariants const& matVariants);

        MCNAPI void* $ctor(::MolangClientTextureSet const& textureSet);
#endif
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
    MCAPI ExpressionNode();

#ifdef LL_PLAT_C
    MCAPI explicit ExpressionNode(::MaterialVariants const& materialVariants);
#endif

    MCAPI ExpressionNode(::ExpressionNode const& rhs);

    MCAPI explicit ExpressionNode(::Molang::details::SourceTree root);

    MCAPI explicit ExpressionNode(float value);

    MCAPI ExpressionNode(::std::string_view expression, ::MolangParseConfig const& config);

    MCAPI ExpressionNode(::std::string const& expression, ::MolangVersion molangVersion);

#ifdef LL_PLAT_C
    MCAPI ExpressionNode(char const* expression, ::MolangVersion molangVersion);
#endif

    MCAPI ExpressionNode(::Json::Value const& value, ::MolangParseConfig const& config);

    MCAPI ExpressionNode(::MolangScriptArg const& value, ::ExpressionOp op);

    MCAPI ::std::optional<::MolangScriptArg> _getValueIfConstant() const;

    MCAPI void clear();

    MCAPI ::MolangScriptArg const& evalGeneric(::RenderParams& renderParams) const;

    MCAPI ::std::string getExpressionString() const;

    MCAPI ::MolangVersion const getMolangVersion() const;

    MCAPI ::ExpressionOp getOp() const;

#ifdef LL_PLAT_C
    MCAPI bool hasVariableAssignments() const;

    MCAPI bool isConstantValue() const;
#endif

    MCAPI bool isInitialized() const;

    MCAPI bool isValid() const;

    MCAPI ::MolangCompileResult link();

#ifdef LL_PLAT_C
    MCAPI bool needsToCompile() const;

    MCAPI ::ExpressionNode& operator=(::MaterialVariants const& materialVariants);
#endif

    MCAPI ::ExpressionNode& operator=(::ExpressionNode const& rhs);

    MCAPI ::ExpressionNode& operator=(float value);

    MCAPI bool parse(::std::string_view expression, ::MolangParseConfig const& config);

    MCAPI bool parse(::std::string_view expression, ::MolangVersion version, ::gsl::span<::HashedString const> idSet);

#ifdef LL_PLAT_C
    MCAPI void
    replaceArrayVariables(::std::unordered_map<::HashedString, ::ExpressionNode>& dataMap, bool compileProgram);

    MCAPI ::brstd::flat_set<::HashedString, ::std::less<::HashedString>, ::std::vector<::HashedString>>
    replaceResourceVariables(::std::unordered_map<::HashedString, ::ExpressionNode::ResourceReference>& resourceTable);

    MCAPI void validateArrayVariables() const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _initializeMolangQueries(::ExpressionQueries&& queries);

    MCAPI static void assertMolangInitialized();

    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Experiments& getExperiments();

#ifdef LL_PLAT_S
    MCAPI static ::std::unordered_multimap<::HashedString, ::MolangQueryFunction> const& getQueryFunctionAccessors();

    MCAPI static ::std::unordered_map<::HashedString, ::std::unordered_set<::HashedString>> const& getQuerySets();
#endif

    MCAPI static void initializeMolang(::ExpressionQueries&& queries);

    MCAPI static ::std::function<
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

    MCAPI static void setExperiments(::Experiments const& experiments);

#ifdef LL_PLAT_C
    MCAPI static void
    setParticleTintFunc(::std::function<::mce::Color(::Block const&, ::BlockSource&, ::BlockPos const&)> tintFunc);

    MCAPI static ::std::string& toLowerInPlaceExceptStrings(::std::string& expression);
#endif

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
    MCFOLD void* $ctor();

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::MaterialVariants const& materialVariants);
#endif

    MCAPI void* $ctor(::ExpressionNode const& rhs);

    MCAPI void* $ctor(::Molang::details::SourceTree root);

    MCAPI void* $ctor(float value);

    MCAPI void* $ctor(::std::string_view expression, ::MolangParseConfig const& config);

    MCAPI void* $ctor(::std::string const& expression, ::MolangVersion molangVersion);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(char const* expression, ::MolangVersion molangVersion);
#endif

    MCAPI void* $ctor(::Json::Value const& value, ::MolangParseConfig const& config);

    MCAPI void* $ctor(::MolangScriptArg const& value, ::ExpressionOp op);
    // NOLINTEND
};

// free functions
// NOLINTBEGIN
MCAPI bool operator!=(::ExpressionNode const& lhs, ::ExpressionNode const& rhs);

MCAPI bool operator==(::ExpressionNode const& lhs, ::ExpressionNode const& rhs);
// NOLINTEND
