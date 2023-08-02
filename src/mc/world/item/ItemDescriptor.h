#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ItemDescriptor {
public:
    // ItemDescriptor inner types declare
    // clang-format off
    struct BaseDescriptor;
    struct ItemEntry;
    // clang-format on

    // ItemDescriptor inner types define
    enum class InternalType : char {
        Invalid      = 0x0,
        Default      = 0x1,
        Molang       = 0x2,
        ItemTag      = 0x3,
        Deferred     = 0x4,
        ComplexAlias = 0x5,
    };

    struct BaseDescriptor {

    public:
        // prevent constructor by default
        BaseDescriptor& operator=(BaseDescriptor const&) = delete;
        BaseDescriptor(BaseDescriptor const&)            = delete;
        BaseDescriptor()                                 = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol
         * ?clone\@ComplexAliasDescriptor\@\@UEBA?AV?$unique_ptr\@UBaseDescriptor\@ItemDescriptor\@\@U?$default_delete\@UBaseDescriptor\@ItemDescriptor\@\@\@std\@\@\@std\@\@XZ
         */
        virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const = 0;
        /**
         * @vftbl 1
         * @symbol ?sameItems\@BaseDescriptor\@ItemDescriptor\@\@UEBA_NAEBU12\@_N\@Z
         */
        virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const&, bool) const;
        /**
         * @vftbl 2
         * @symbol ?sameItem\@ComplexAliasDescriptor\@\@UEBA_NAEBUItemEntry\@ItemDescriptor\@\@_N\@Z
         */
        virtual bool sameItem(struct ItemDescriptor::ItemEntry const&, bool) const = 0;
        /**
         * @vftbl 3
         * @symbol
         * ?getFullName\@BaseDescriptor\@ItemDescriptor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
         */
        virtual std::string const& getFullName() const;
        /**
         * @vftbl 4
         * @symbol ?getItem\@BaseDescriptor\@ItemDescriptor\@\@UEBA?AUItemEntry\@2\@XZ
         */
        virtual struct ItemDescriptor::ItemEntry getItem() const;
        /**
         * @vftbl 5
         * @symbol
         * ?forEachItemUntil\@BaseDescriptor\@ItemDescriptor\@\@UEBA_NV?$function\@$$A6A_NAEBVItem\@\@F\@Z\@std\@\@\@Z
         */
        virtual bool forEachItemUntil(std::function<bool(class Item const&, short)>) const;
        /**
         * @vftbl 6
         * @symbol
         * ?toMap\@ComplexAliasDescriptor\@\@UEBA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
         */
        virtual std::map<std::string, std::string> toMap() const = 0;
        /**
         * @vftbl 7
         * @symbol ?save\@ComplexAliasDescriptor\@\@UEBA?AV?$optional\@VCompoundTag\@\@\@std\@\@XZ
         */
        virtual std::optional<class CompoundTag> save() const = 0;
        /**
         * @vftbl 8
         * @symbol ?serialize\@BaseDescriptor\@ItemDescriptor\@\@UEBAXAEAVValue\@Json\@\@\@Z
         */
        virtual void serialize(class Json::Value&) const;
        /**
         * @vftbl 9
         * @symbol ?serialize\@ComplexAliasDescriptor\@\@UEBAXAEAVBinaryStream\@\@\@Z
         */
        virtual void serialize(class BinaryStream&) const = 0;
        /**
         * @vftbl 10
         * @symbol ?getType\@ComplexAliasDescriptor\@\@UEBA?AW4InternalType\@ItemDescriptor\@\@XZ
         */
        virtual enum class ItemDescriptor::InternalType getType() const = 0;
        /**
         * @vftbl 11
         * @symbol ?isValid\@BaseDescriptor\@ItemDescriptor\@\@UEBA_NXZ
         */
        virtual bool isValid() const;
        /**
         * @vftbl 12
         * @symbol ?getHash\@ComplexAliasDescriptor\@\@UEBA_KXZ
         */
        virtual uint64_t getHash() const = 0;
        /**
         * @vftbl 13
         * @symbol ?shouldResolve\@BaseDescriptor\@ItemDescriptor\@\@UEBA_NXZ
         */
        virtual bool shouldResolve() const;
        /**
         * @vftbl 14
         * @symbol
         * ?resolve\@BaseDescriptor\@ItemDescriptor\@\@UEBA?AV?$unique_ptr\@UBaseDescriptor\@ItemDescriptor\@\@U?$default_delete\@UBaseDescriptor\@ItemDescriptor\@\@\@std\@\@\@std\@\@XZ
         */
        virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMDESCRIPTOR_BASEDESCRIPTOR
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~BaseDescriptor();
#endif
        // NOLINTEND
    };

    struct ItemEntry {

    public:
        const class Item* mItem;     // this+0x0
        short             mAuxValue; // this+0x8
    public:
        // NOLINTBEGIN
        /**
         * @symbol ?getBlock\@ItemEntry\@ItemDescriptor\@\@QEBAPEBVBlock\@\@XZ
         */
        MCAPI class Block const* getBlock() const;
        // NOLINTEND
    };

    std::unique_ptr<ItemDescriptor::BaseDescriptor> mImpl;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?serialize\@ItemDescriptor\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serialize(class Json::Value&) const;
    /**
     * @vftbl 2
     * @symbol ?serialize\@ItemDescriptor\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void serialize(class BinaryStream&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMDESCRIPTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemDescriptor();
#endif
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@H\@Z
     */
    MCAPI ItemDescriptor(std::string_view, int);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@XZ
     */
    MCAPI ItemDescriptor();
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemDescriptor(class ItemDescriptor const&);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI ItemDescriptor(class ReadOnlyBinaryStream&);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@AEBUItemTag\@\@\@Z
     */
    MCAPI ItemDescriptor(struct ItemTag const&);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@AEBVItem\@\@H\@Z
     */
    MCAPI ItemDescriptor(class Item const&, int);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@AEBVBlockLegacy\@\@\@Z
     */
    MCAPI ItemDescriptor(class BlockLegacy const&);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@AEBVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI ItemDescriptor(class Json::Value const&, class SemVersion const&);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@AEBVBlock\@\@\@Z
     */
    MCAPI ItemDescriptor(class Block const&);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ItemDescriptor(class ItemDescriptor&&);
    /**
     * @symbol ?forEachItemUntil\@ItemDescriptor\@\@QEBA_NV?$function\@$$A6A_NAEBVItem\@\@F\@Z\@std\@\@\@Z
     */
    MCAPI bool forEachItemUntil(std::function<bool(class Item const&, short)>) const;
    /**
     * @symbol ?getAuxValue\@ItemDescriptor\@\@QEBAFXZ
     */
    MCAPI short getAuxValue() const;
    /**
     * @symbol ?getBlock\@ItemDescriptor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const* getBlock() const;
    /**
     * @symbol
     * ?getFullName\@ItemDescriptor\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getFullName() const;
    /**
     * @symbol ?getHash\@ItemDescriptor\@\@QEBA_KXZ
     */
    MCAPI uint64_t getHash() const;
    /**
     * @symbol ?getId\@ItemDescriptor\@\@QEBAFXZ
     */
    MCAPI short getId() const;
    /**
     * @symbol ?getIdAux\@ItemDescriptor\@\@QEBAHXZ
     */
    MCAPI int getIdAux() const;
    /**
     * @symbol ?getItem\@ItemDescriptor\@\@QEBAPEBVItem\@\@XZ
     */
    MCAPI class Item const* getItem() const;
    /**
     * @symbol ?getLegacyBlock\@ItemDescriptor\@\@QEBAAEBV?$WeakPtr\@VBlockLegacy\@\@\@\@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> const& getLegacyBlock() const;
    /**
     * @symbol
     * ?getRawNameId\@ItemDescriptor\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getRawNameId() const;
    /**
     * @symbol
     * ?getSerializedNameAndAux\@ItemDescriptor\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSerializedNameAndAux() const;
    /**
     * @symbol ?isDefinedAsItemName\@ItemDescriptor\@\@QEBA_NXZ
     */
    MCAPI bool isDefinedAsItemName() const;
    /**
     * @symbol ?isNull\@ItemDescriptor\@\@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @symbol ?isValid\@ItemDescriptor\@\@QEBA_N_N\@Z
     */
    MCAPI bool isValid(bool) const;
    /**
     * @symbol ??4ItemDescriptor\@\@QEAAXAEBV0\@\@Z
     */
    MCAPI void operator=(class ItemDescriptor const&);
    /**
     * @symbol ??4ItemDescriptor\@\@QEAAX$$QEAV0\@\@Z
     */
    MCAPI void operator=(class ItemDescriptor&&);
    /**
     * @symbol ??8ItemDescriptor\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class ItemDescriptor const&) const;
    /**
     * @symbol ?sameItem\@ItemDescriptor\@\@QEBA_NAEBV1\@_N\@Z
     */
    MCAPI bool sameItem(class ItemDescriptor const&, bool) const;
    /**
     * @symbol ?sameItem\@ItemDescriptor\@\@QEBA_NAEBVItemStack\@\@_N\@Z
     */
    MCAPI bool sameItem(class ItemStack const&, bool) const;
    /**
     * @symbol ?save\@ItemDescriptor\@\@QEBA?AV?$optional\@VCompoundTag\@\@\@std\@\@XZ
     */
    MCAPI std::optional<class CompoundTag> save() const;
    /**
     * @symbol ?bindType\@ItemDescriptor\@\@SAXXZ
     */
    MCAPI static void bindType();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_resolve\@ItemDescriptor\@\@AEBAXXZ
     */
    MCAPI void _resolve() const;
    /**
     * @symbol
     * ?fromMap\@ItemDescriptor\@\@CAXAEAV1\@AEBV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@AEBVBedrockLoadContext\@\@\@Z
     */
    MCAPI static void
    fromMap(class ItemDescriptor&, std::map<std::string, std::string> const&, class BedrockLoadContext const&);
    /**
     * @symbol
     * ?toMap\@ItemDescriptor\@\@CA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@AEBV1\@\@Z
     */
    MCAPI static std::map<std::string, std::string> toMap(class ItemDescriptor const&);
    // NOLINTEND
};
