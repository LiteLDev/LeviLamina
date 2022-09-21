/**
 * @file  MC/ItemStackRequestAction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestAction.
 *
 */
class ItemStackRequestAction {

#define AFTER_EXTRA
    // Add Member There
public:
    ItemStackRequestActionType mType;

    static inline std::unordered_map<enum class ItemStackRequestActionType, std::string> const& getActionTypeMap() {
        return actionTypeMap.mMap1;
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTION
public:
    class ItemStackRequestAction& operator=(class ItemStackRequestAction const &) = delete;
    ItemStackRequestAction(class ItemStackRequestAction const &) = delete;
    ItemStackRequestAction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ItemStackRequestAction();
    /**
     * @hash   813873632
     * @vftbl  1
     * @symbol ?getCraftAction@ItemStackRequestAction@@UEBAPEBVItemStackRequestActionCraftBase@@XZ
     */
    virtual class ItemStackRequestActionCraftBase const * getCraftAction() const;
    /**
     * @hash   -994504033
     * @vftbl  2
     * @symbol ?getFilteredStringIndex@ItemStackRequestAction@@UEBAHXZ
     */
    virtual int getFilteredStringIndex() const;
    /**
     * @hash   -2115247836
     * @vftbl  3
     * @symbol ?postLoadItems_DEPRECATEDASKTYLAING@ItemStackRequestAction@@UEAAXAEAVBlockPalette@@_N@Z
     */
    virtual void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette &, bool);
    /**
     * @hash   -502064773
     * @symbol ??0ItemStackRequestAction@@QEAA@W4ItemStackRequestActionType@@@Z
     */
    MCAPI ItemStackRequestAction(enum ItemStackRequestActionType);
    /**
     * @hash   2052355280
     * @symbol ?getActionType@ItemStackRequestAction@@QEBA?AW4ItemStackRequestActionType@@XZ
     */
    MCAPI enum ItemStackRequestActionType getActionType() const;
    /**
     * @hash   1603973336
     * @symbol ?write@ItemStackRequestAction@@QEBAXAEAVBinaryStream@@@Z
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @hash   741044845
     * @symbol ?getActionTypeName@ItemStackRequestAction@@SA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ItemStackRequestActionType@@@Z
     */
    MCAPI static std::string const getActionTypeName(enum ItemStackRequestActionType);
    /**
     * @hash   2132846239
     * @symbol ?read@ItemStackRequestAction@@SA?AV?$unique_ptr@VItemStackRequestAction@@U?$default_delete@VItemStackRequestAction@@@std@@@std@@AEAVReadOnlyBinaryStream@@@Z
     */
    MCAPI static std::unique_ptr<class ItemStackRequestAction> read(class ReadOnlyBinaryStream &);

//private:

private:
    /**
     * @hash   -1080217533
     * @symbol ?actionTypeMap@ItemStackRequestAction@@0V?$BidirectionalUnorderedMap@W4ItemStackRequestActionType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum ItemStackRequestActionType, std::string> const actionTypeMap;

};