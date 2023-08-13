#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { enum class ScriptFacing; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlock {

public:
    // prevent constructor by default
    ScriptBlock& operator=(ScriptBlock const&) = delete;
    ScriptBlock(ScriptBlock const&)            = delete;
    ScriptBlock()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0ScriptBlock\@ScriptModuleMinecraft\@\@QEAA\@AEAVBlockSource\@\@VBlockPos\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI ScriptBlock(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol ??0ScriptBlock\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptBlock(class ScriptModuleMinecraft::ScriptBlock&&);
    /**
     * @symbol
     * ?canPlace\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@AEBV?$variant\@V?$StrongTypedObjectHandle\@VScriptBlockType\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@2\@\@std\@\@V?$optional\@W4ScriptFacing\@ScriptModuleMinecraft\@\@\@6\@\@Z
     */
    MCAPI class Scripting::Result<bool>
    canPlace(std::variant<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>> const&, std::optional<enum class ScriptModuleMinecraft::ScriptFacing>)
        const;
    /**
     * @symbol
     * ?getComponent\@ScriptBlock\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$optional\@V?$StrongTypedObjectHandle\@VBaseScriptBlockComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::BaseScriptBlockComponent>>>
    getComponent(std::string const&);
    /**
     * @symbol
     * ?getComponent_010\@ScriptBlock\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$optional\@V?$StrongTypedObjectHandle\@VBaseScriptBlockComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::BaseScriptBlockComponent>>>
    getComponent_010(std::string const&);
    /**
     * @symbol
     * ?getDimension\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$StrongTypedObjectHandle\@VScriptDimension\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension> getDimension() const;
    /**
     * @symbol
     * ?getId_010\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getId_010() const;
    /**
     * @symbol
     * ?getItemStack\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@H_N\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>
    getItemStack(int, bool) const;
    /**
     * @symbol ?getLocation\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@VVec3\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<class Vec3> getLocation() const;
    /**
     * @symbol
     * ?getLocation_010\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$StrongTypedObjectHandle\@VBlockPos\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class BlockPos> getLocation_010() const;
    /**
     * @symbol
     * ?getPermutation\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>
    getPermutation() const;
    /**
     * @symbol
     * ?getPermutation_010\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>
    getPermutation_010() const;
    /**
     * @symbol
     * ?getRedstonePower\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$optional\@H\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::optional<int>> getRedstonePower() const;
    /**
     * @symbol
     * ?getTags\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::vector<std::string>> getTags() const;
    /**
     * @symbol
     * ?getTags_010\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getTags_010() const;
    /**
     * @symbol
     * ?getType\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptBlockType\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>>
    getType() const;
    /**
     * @symbol
     * ?getTypeId\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::string> getTypeId() const;
    /**
     * @symbol
     * ?getType_010\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$StrongTypedObjectHandle\@VScriptBlockType\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType> getType_010() const;
    /**
     * @symbol ?getWaterlogged\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getWaterlogged() const;
    /**
     * @symbol
     * ?hasTag\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<bool> hasTag(std::string const&) const;
    /**
     * @symbol
     * ?hasTag_010\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasTag_010(std::string const&) const;
    /**
     * @symbol ?isAir\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isAir() const;
    /**
     * @symbol ?isLiquid\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isLiquid() const;
    /**
     * @symbol ?isSolid\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isSolid() const;
    /**
     * @symbol ??4ScriptBlock\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptBlock& operator=(class ScriptModuleMinecraft::ScriptBlock&&);
    /**
     * @symbol
     * ?setPermutation\@ScriptBlock\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptBlockPermutation\@2\@\@Z
     */
    MCAPI class Scripting::Result<void> setPermutation(class ScriptModuleMinecraft::ScriptBlockPermutation const&);
    /**
     * @symbol ?setPermutation_010\@ScriptBlock\@ScriptModuleMinecraft\@\@QEAAXAEBVScriptBlockPermutation\@2\@\@Z
     */
    MCAPI void setPermutation_010(class ScriptModuleMinecraft::ScriptBlockPermutation const&);
    /**
     * @symbol
     * ?setType\@ScriptBlock\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptBlockType\@2\@\@Z
     */
    MCAPI class Scripting::Result<void> setType(class ScriptModuleMinecraft::ScriptBlockType const&);
    /**
     * @symbol ?setType_010\@ScriptBlock\@ScriptModuleMinecraft\@\@QEAAXAEBVScriptBlockType\@2\@\@Z
     */
    MCAPI void setType_010(class ScriptModuleMinecraft::ScriptBlockType const&);
    /**
     * @symbol ?setWaterlogged\@ScriptBlock\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void> setWaterlogged(bool);
    /**
     * @symbol ?setWaterlogged_010\@ScriptBlock\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void> setWaterlogged_010(bool);
    /**
     * @symbol
     * ?trySetPermutation\@ScriptBlock\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@AEBVScriptBlockPermutation\@2\@\@Z
     */
    MCAPI class Scripting::Result<bool>
    trySetPermutation(class ScriptModuleMinecraft::ScriptBlockPermutation const&) const;
    /**
     * @symbol ??1ScriptBlock\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptBlock();
    /**
     * @symbol
     * ?bind\@ScriptBlock\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBlock\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlock> bind();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_collectTags\@ScriptBlock\@ScriptModuleMinecraft\@\@AEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVBlock\@\@\@Z
     */
    MCAPI std::vector<std::string> _collectTags(class Block const&) const;
    /**
     * @symbol ?_isValid\@ScriptBlock\@ScriptModuleMinecraft\@\@AEBA_NXZ
     */
    MCAPI bool _isValid() const;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
