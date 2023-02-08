/**
 * @file  ItemStackNetIdVariant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1315103333
     * @symbol  ??0ItemStackNetIdVariant\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemStackNetIdVariant(struct ItemStackNetIdVariant &&);
    /**
     * @hash   -1730087883
     * @symbol  ??0ItemStackNetIdVariant\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemStackNetIdVariant(struct ItemStackNetIdVariant const &);
    /**
     * @hash   -1880463762
     * @symbol  ??0ItemStackNetIdVariant\@\@QEAA\@XZ
     */
    MCAPI ItemStackNetIdVariant();
    /**
     * @hash   -232142198
     * @symbol  ?deserialize\@ItemStackNetIdVariant\@\@QEAAXAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI void deserialize(class ReadOnlyBinaryStream &);
    /**
     * @hash   70237756
     * @symbol  ?hasServerNetId\@ItemStackNetIdVariant\@\@QEBA_NXZ
     */
    MCAPI bool hasServerNetId() const;
    /**
     * @hash   1638413674
     * @symbol  ?isValid\@ItemStackNetIdVariant\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -859508085
     * @symbol  ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@AEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant & operator=(class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const &);
    /**
     * @hash   -1757489783
     * @symbol  ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@AEBV?$TypedClientNetId\@UItemStackLegacyRequestIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant & operator=(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const &);
    /**
     * @hash   -140943964
     * @symbol  ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant & operator=(struct ItemStackNetIdVariant &&);
    /**
     * @hash   2008574014
     * @symbol  ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant & operator=(struct ItemStackNetIdVariant const &);
    /**
     * @hash   -212889271
     * @symbol  ??8ItemStackNetIdVariant\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct ItemStackNetIdVariant const &) const;
    /**
     * @hash   94933068
     * @symbol  ?serialize\@ItemStackNetIdVariant\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void serialize(class BinaryStream &) const;
    /**
     * @hash   -1821965574
     * @symbol  ?toString\@ItemStackNetIdVariant\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @hash   498832782
     * @symbol  ?tryGetLegacyRequestId\@ItemStackNetIdVariant\@\@QEBAPEBV?$TypedClientNetId\@UItemStackLegacyRequestIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const * tryGetLegacyRequestId() const;
    /**
     * @hash   -556248516
     * @symbol  ?tryGetRequestId\@ItemStackNetIdVariant\@\@QEBAPEBV?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> const * tryGetRequestId() const;
    /**
     * @hash   1453629008
     * @symbol  ?tryGetServerNetId\@ItemStackNetIdVariant\@\@QEBAPEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const * tryGetServerNetId() const;
    /**
     * @hash   -922865618
     * @symbol  ??1ItemStackNetIdVariant\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackNetIdVariant();

};