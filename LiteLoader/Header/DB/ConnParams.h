#pragma once
#include "Any.h"
#include <unordered_map>

namespace DB {

/**
 * @brief Connection parameters
 * 
 */
class ConnParams : public std::unordered_map<std::string, Any>
{
    
public:

    ConnParams() = default;
    /**
     * @brief Construct a new ConnParams object
     * 
     * @param list An initializer list like `{"host", "localhost", "port", 3306}`
     * @throw std::invalid_argument If the type of key is not supported
     */
    LIAPI ConnParams(const std::initializer_list<Any>& list);
    /**
     * @brief Construct a new ConnParams object
     * 
     * @param list An initializer list like `{{"key1", "value1"}, {"key2", "value2"}}`
     */
    LIAPI ConnParams(const std::initializer_list<std::pair<std::string, Any>>& list);
    /**
     * @brief Construct a new ConnParams object
     * 
     * @param str Connection string like `mysql://localhost:3306?key1=value1&key2=value2`
     */
    LIAPI ConnParams(const std::string& str);

};

} // namespace DB