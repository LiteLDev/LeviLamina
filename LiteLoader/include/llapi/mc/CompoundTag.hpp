/**
 * @file  MC/CompoundTag.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CompoundTagVariant.hpp"
enum class SnbtFormat : unsigned char
{
    PartialNewLine = 0,
    AlwayNewLine = 1,
    Minimize = 2,
};
struct PrettySnbtFormat;

#undef BEFORE_EXTRA

/**
 * @brief MC class CompoundTag.
 *
 */
class CompoundTag : public Tag {

#define AFTER_EXTRA
// Add Member There
    map<std::string, CompoundTagVariant> val;

public:

    LIAPI static std::unique_ptr<CompoundTag> create();
    LIAPI map<std::string, CompoundTagVariant>& value();

    template <typename T>
    inline T const* get(class gsl::basic_string_span<char const, -1> key) const {
        return (T*)get(key);
    };

    // put value
    LIAPI void putEnd(std::string key);
    LIAPI double& putDouble(std::string key, double val);
    LIAPI void putByteArray(std::string key, char data[], size_t size);
    LIAPI void putIntArray(std::string key, int data[], size_t size);
    LIAPI struct TagMemoryChunk& putIntArray(std::string key, struct TagMemoryChunk val);

    // get value
    LIAPI double getDouble(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI struct TagMemoryChunk const& getIntArray(class gsl::basic_string_span<char const, -1> key) const;

    // get tag
    LIAPI class ByteTag const* getByteTag(class gsl::basic_string_span<char const, -1> key) const;
    //BDS has implemented this interface
    //LIAPI class ShortTag const* getShortTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class FloatTag const* getFloatTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class DoubleTag const* getDoubleTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class ByteArrayTag const* getByteArrayTag(class gsl::basic_string_span<char const, -1> key) const;
    //LIAPI class StringTag const* getStringTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class IntArrayTag const* getIntArrayTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class ListTag const* getListTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class CompoundTag const* getCompoundTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class Tag* operator[](class gsl::basic_string_span<char const, -1> key);

    // IO
    LIAPI void setItemStack(ItemStack* item);
    LIAPI void setBlock(Block* blk);
    LIAPI bool setActor(Actor* actor) const;
    LIAPI bool setPlayer(Player* player);
    LIAPI bool setBlockActor(BlockActor* ble) const;
    LIAPI static std::unique_ptr<CompoundTag> fromItemStack(ItemStack* item);
    LIAPI static std::unique_ptr<CompoundTag> fromBlock(Block* blk);
    LIAPI static std::unique_ptr<CompoundTag> fromActor(Actor* actor);
    LIAPI static std::unique_ptr<CompoundTag> fromPlayer(Player* player);
    LIAPI static std::unique_ptr<CompoundTag> fromBlockActor(BlockActor* ble);

    // To Formatted SNBT
    LIAPI std::string toSNBT(int indent, SnbtFormat snbtFormat = SnbtFormat::PartialNewLine);
    LIAPI string toPrettySNBT(bool forPlayer = false) const;
    LIAPI string toPrettySNBT(struct PrettySnbtFormat const& format) const;
    LIAPI std::string toBinaryNBT(bool isLittleEndian = true);
    LIAPI static std::string nbtListToBinary(std::vector<std::unique_ptr<CompoundTag>> tags, bool isLittleEndian = true);
    LIAPI static std::unique_ptr<CompoundTag> fromSNBT(const std::string& snbt);
    LIAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(void* data, size_t len, bool isLittleEndian = true);
    LIAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(void* data, size_t len, size_t& offset, bool isLittleEndian = true);
    LIAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(std::string const& data, size_t& offset, bool isLittleEndian = true);
    LIAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(std::string const& data, bool isLittleEndian = true);
    LIAPI static std::vector<std::unique_ptr<CompoundTag>> nbtListFromBinary(std::string const& data, bool isLittleEndian = true);

    LIAPI std::string toNetworkNBT() const;
    LIAPI static std::unique_ptr<CompoundTag> fromNetworkNBT(std::string const& data);
    LIAPI static std::string nbtListToNetwork(std::vector<std::unique_ptr<CompoundTag>> tags);
    LIAPI static std::vector<std::unique_ptr<CompoundTag>> nbtListFromNetwork(std::string const& data);


    // Deprecated?
    LIAPI std::string toSNBT();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAG
public:
    class CompoundTag& operator=(class CompoundTag const &) = delete;
    CompoundTag(class CompoundTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CompoundTag();
    /**
     * @hash   421471744
     * @vftbl  2
     * @symbol ?write@CompoundTag@@UEBAXAEAVIDataOutput@@@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @hash   -1124021761
     * @vftbl  3
     * @symbol ?load@CompoundTag@@UEAAXAEAVIDataInput@@@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @hash   1555472695
     * @vftbl  4
     * @symbol ?toString@CompoundTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   442707708
     * @vftbl  5
     * @symbol ?getId@CompoundTag@@UEBA?AW4Type@Tag@@XZ
     */
    virtual enum Tag::Type getId() const;
    /**
     * @hash   298662245
     * @vftbl  6
     * @symbol ?equals@CompoundTag@@UEBA_NAEBVTag@@@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @hash   2017331399
     * @vftbl  8
     * @symbol ?print@CompoundTag@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVPrintStream@@@Z
     */
    virtual void print(std::string const &, class PrintStream &) const;
    /**
     * @hash   -1575175175
     * @vftbl  9
     * @symbol ?copy@CompoundTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @hash   1903960047
     * @vftbl  10
     * @symbol ?hash@CompoundTag@@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @hash   2063606795
     * @symbol ??0CompoundTag@@QEAA@XZ
     */
    MCAPI CompoundTag();
    /**
     * @hash   1717227655
     * @symbol ??0CompoundTag@@QEAA@$$QEAV0@@Z
     */
    MCAPI CompoundTag(class CompoundTag &&);
    /**
     * @hash   361605544
     * @symbol ?append@CompoundTag@@QEAAXAEBV1@@Z
     */
    MCAPI void append(class CompoundTag const &);
    /**
     * @hash   -1814080750
     * @symbol ?begin@CompoundTag@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTagVariant@@@std@@@std@@@std@@@std@@XZ
     */
    MCAPI class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<std::string const, class CompoundTagVariant>>>> begin() const;
    /**
     * @hash   705203535
     * @symbol ?clear@CompoundTag@@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   1331576180
     * @symbol ?clone@CompoundTag@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> clone() const;
    /**
     * @hash   203736463
     * @symbol ?contains@CompoundTag@@QEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI bool contains(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   1433847094
     * @symbol ?contains@CompoundTag@@QEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@W4Type@Tag@@@Z
     */
    MCAPI bool contains(class gsl::basic_string_span<char const, -1>, enum Tag::Type) const;
    /**
     * @hash   -418609480
     * @symbol ?deepCopy@CompoundTag@@QEAAXAEBV1@@Z
     */
    MCAPI void deepCopy(class CompoundTag const &);
    /**
     * @hash   2107863794
     * @symbol ?end@CompoundTag@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTagVariant@@@std@@@std@@@std@@@std@@XZ
     */
    MCAPI class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<std::string const, class CompoundTagVariant>>>> end() const;
    /**
     * @hash   -1601401336
     * @symbol ?get@CompoundTag@@QEAAPEAVTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class Tag * get(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -1905851352
     * @symbol ?get@CompoundTag@@QEBAPEBVTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class Tag const * get(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   1174338489
     * @symbol ?getBoolean@CompoundTag@@QEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI bool getBoolean(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   436301634
     * @symbol ?getByte@CompoundTag@@QEBAEV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI unsigned char getByte(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -1815522707
     * @symbol ?getByteArray@CompoundTag@@QEBAAEBUTagMemoryChunk@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI struct TagMemoryChunk const & getByteArray(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   1479687654
     * @symbol ?getByteTag@CompoundTag@@QEAAPEAVByteTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class ByteTag * getByteTag(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -10190294
     * @symbol ?getCompound@CompoundTag@@QEAAPEAV1@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class CompoundTag * getCompound(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   1196373454
     * @symbol ?getCompound@CompoundTag@@QEBAPEBV1@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class CompoundTag const * getCompound(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -1581839021
     * @symbol ?getFloat@CompoundTag@@QEBAMV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI float getFloat(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   2067294811
     * @symbol ?getInt@CompoundTag@@QEBAHV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI int getInt(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   1523657046
     * @symbol ?getInt64@CompoundTag@@QEBA_JV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI __int64 getInt64(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -1772162490
     * @symbol ?getInt64Tag@CompoundTag@@QEAAPEAVInt64Tag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class Int64Tag * getInt64Tag(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   750969194
     * @symbol ?getInt64Tag@CompoundTag@@QEBAPEBVInt64Tag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class Int64Tag const * getInt64Tag(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   2080290714
     * @symbol ?getIntTag@CompoundTag@@QEAAPEAVIntTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class IntTag * getIntTag(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   450943166
     * @symbol ?getIntTag@CompoundTag@@QEBAPEBVIntTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class IntTag const * getIntTag(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   1597000584
     * @symbol ?getList@CompoundTag@@QEAAPEAVListTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class ListTag * getList(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   1958488360
     * @symbol ?getList@CompoundTag@@QEBAPEBVListTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class ListTag const * getList(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -2077182182
     * @symbol ?getShort@CompoundTag@@QEBAFV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI short getShort(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -1675313848
     * @symbol ?getShortTag@CompoundTag@@QEBAPEBVShortTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class ShortTag const * getShortTag(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -485303735
     * @symbol ?getString@CompoundTag@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI std::string const & getString(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -1582718426
     * @symbol ?getStringTag@CompoundTag@@QEBAPEBVStringTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class StringTag const * getStringTag(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -198873008
     * @symbol ?isEmpty@CompoundTag@@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   488654738
     * @symbol ??4CompoundTag@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class CompoundTag & operator=(class CompoundTag &&);
    /**
     * @hash   1466929864
     * @symbol ?put@CompoundTag@@QEAAAEAVTag@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV2@@Z
     */
    MCAPI class Tag & put(std::string, class Tag &&);
    /**
     * @hash   -2086191892
     * @symbol ?put@CompoundTag@@QEAAPEAVTag@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@4@@Z
     */
    MCAPI class Tag * put(std::string, std::unique_ptr<class Tag>);
    /**
     * @hash   -1439936133
     * @symbol ?putBoolean@CompoundTag@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI void putBoolean(std::string, bool);
    /**
     * @hash   -1458270713
     * @symbol ?putByte@CompoundTag@@QEAAAEAEV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@E@Z
     */
    MCAPI unsigned char & putByte(std::string, unsigned char);
    /**
     * @hash   -1900590716
     * @symbol ?putByteArray@CompoundTag@@QEAAAEAUTagMemoryChunk@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U2@@Z
     */
    MCAPI struct TagMemoryChunk & putByteArray(std::string, struct TagMemoryChunk);
    /**
     * @hash   -1082840402
     * @symbol ?putCompound@CompoundTag@@QEAAAEAV1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V1@@Z
     */
    MCAPI class CompoundTag & putCompound(std::string, class CompoundTag);
    /**
     * @hash   2086285659
     * @symbol ?putCompound@CompoundTag@@QEAAPEAV1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@3@@Z
     */
    MCAPI class CompoundTag * putCompound(std::string, std::unique_ptr<class CompoundTag>);
    /**
     * @hash   1510657083
     * @symbol ?putFloat@CompoundTag@@QEAAAEAMV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
     */
    MCAPI float & putFloat(std::string, float);
    /**
     * @hash   -1659370485
     * @symbol ?putInt@CompoundTag@@QEAAAEAHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI int & putInt(std::string, int);
    /**
     * @hash   1143580899
     * @symbol ?putInt64@CompoundTag@@QEAAAEA_JV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@Z
     */
    MCAPI __int64 & putInt64(std::string, __int64);
    /**
     * @hash   -571900549
     * @symbol ?putShort@CompoundTag@@QEAAAEAFV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
     */
    MCAPI short & putShort(std::string, short);
    /**
     * @hash   -1019151175
     * @symbol ?putString@CompoundTag@@QEAAAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@0@Z
     */
    MCAPI std::string & putString(std::string, std::string);
    /**
     * @hash   1389657262
     * @symbol ?rawView@CompoundTag@@QEBAAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTagVariant@@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTagVariant@@@std@@@2@@std@@XZ
     */
    MCAPI class std::map<std::string, class CompoundTagVariant, struct std::less<void>, class std::allocator<struct std::pair<std::string const, class CompoundTagVariant>>> const & rawView() const;
    /**
     * @hash   1491165621
     * @symbol ?remove@CompoundTag@@QEAA_NV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI bool remove(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   500100707
     * @symbol ?rename@CompoundTag@@QEAAXV?$basic_string_span@$$CBD$0?0@gsl@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void rename(class gsl::basic_string_span<char const, -1>, std::string);
    /**
     * @hash   2069030445
     * @symbol ?size@CompoundTag@@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;

};