//Extra Part For HashedString.hpp
#ifdef EXTRA_INCLUDE_PART_HASHEDSTRING
// Include Headers or Declare Types Here

#else
// Add Member There
	uint64_t hash;
	std::string str;
	int64_t unk;

public:
    HashedString(HashedString const& hstr)
        : str(hstr.getString())
        , unk(0)
        , hash(computeHash(str)) {
    }

#endif
