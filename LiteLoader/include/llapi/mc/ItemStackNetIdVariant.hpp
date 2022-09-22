/**
 * @file  ItemStackNetIdVariant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
struct ItemStackNetIdTag;
struct ItemStackLegacyRequestIdTag;
struct ItemStackRequestIdTag;
enum class ItemStackNetIdType : unsigned char {
    ItemStackNetId_TypedServerNetId = 0,
    ItemStackRequestId_TypedClientNetId = 1,
    ItemStackLegacyRequestId_TypedClientNetId = 2,
};
#undef BEFORE_EXTRA

/**
 * @brief MC structure ItemStackNetIdVariant.
 *
 */
struct ItemStackNetIdVariant {

#define AFTER_EXTRA
    // Add Member There
    std::variant<
        TypedServerNetId<ItemStackNetIdTag, int, 0>, TypedClientNetId<ItemStackRequestIdTag, int, 0>,
        TypedClientNetId<ItemStackLegacyRequestIdTag, int, 0>>
        id;


#undef AFTER_EXTRA
public:
    /**
     * @hash   -631870773
     * @symbol ??0ItemStackNetIdVariant@@QEAA@$$QEAU0@@Z
     */
    MCAPI ItemStackNetIdVariant(struct ItemStackNetIdVariant &&);
    /**
     * @hash   -1046855323
     * @symbol ??0ItemStackNetIdVariant@@QEAA@AEBU0@@Z
     */
    MCAPI ItemStackNetIdVariant(struct ItemStackNetIdVariant const &);
    /**
     * @hash   -2130908050
     * @symbol ??0ItemStackNetIdVariant@@QEAA@XZ
     */
    MCAPI ItemStackNetIdVariant();
    /**
     * @hash   451044234
     * @symbol ?deserialize@ItemStackNetIdVariant@@QEAAXAEAVReadOnlyBinaryStream@@@Z
     */
    MCAPI void deserialize(class ReadOnlyBinaryStream &);
    /**
     * @hash   753408812
     * @symbol ?hasServerNetId@ItemStackNetIdVariant@@QEBA_NXZ
     */
    MCAPI bool hasServerNetId() const;
    /**
     * @hash   -1973382566
     * @symbol ?isValid@ItemStackNetIdVariant@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -176290901
     * @symbol ??4ItemStackNetIdVariant@@QEAAAEAU0@AEBV?$TypedServerNetId@UItemStackNetIdTag@@H$0A@@@@Z
     */
    MCAPI struct ItemStackNetIdVariant & operator=(class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const &);
    /**
     * @hash   -1074257223
     * @symbol ??4ItemStackNetIdVariant@@QEAAAEAU0@AEBV?$TypedClientNetId@UItemStackLegacyRequestIdTag@@H$0A@@@@Z
     */
    MCAPI struct ItemStackNetIdVariant & operator=(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const &);
    /**
     * @hash   542288596
     * @symbol ??4ItemStackNetIdVariant@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct ItemStackNetIdVariant & operator=(struct ItemStackNetIdVariant &&);
    /**
     * @hash   -1603160722
     * @symbol ??4ItemStackNetIdVariant@@QEAAAEAU0@AEBU0@@Z
     */
    MCAPI struct ItemStackNetIdVariant & operator=(struct ItemStackNetIdVariant const &);
    /**
     * @hash   470297161
     * @symbol ??8ItemStackNetIdVariant@@QEBA_NAEBU0@@Z
     */
    MCAPI bool operator==(struct ItemStackNetIdVariant const &) const;
    /**
     * @hash   778104124
     * @symbol ?serialize@ItemStackNetIdVariant@@QEBAXAEAVBinaryStream@@@Z
     */
    MCAPI void serialize(class BinaryStream &) const;
    /**
     * @hash   -1138794518
     * @symbol ?toString@ItemStackNetIdVariant@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @hash   1182019214
     * @symbol ?tryGetLegacyRequestId@ItemStackNetIdVariant@@QEBAPEBV?$TypedClientNetId@UItemStackLegacyRequestIdTag@@H$0A@@@XZ
     */
    MCAPI class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const * tryGetLegacyRequestId() const;
    /**
     * @hash   126937916
     * @symbol ?tryGetRequestId@ItemStackNetIdVariant@@QEBAPEBV?$TypedClientNetId@UItemStackRequestIdTag@@H$0A@@@XZ
     */
    MCAPI class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> const * tryGetRequestId() const;
    /**
     * @hash   2136815440
     * @symbol ?tryGetServerNetId@ItemStackNetIdVariant@@QEBAPEBV?$TypedServerNetId@UItemStackNetIdTag@@H$0A@@@XZ
     */
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const * tryGetServerNetId() const;
    /**
     * @hash   -1030482242
     * @symbol ??1ItemStackNetIdVariant@@QEAA@XZ
     */
    MCAPI ~ItemStackNetIdVariant();

};