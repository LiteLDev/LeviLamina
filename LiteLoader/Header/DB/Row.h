#pragma once
#include "Any.h"
#include <unordered_map>
#include <vector>

namespace DB
{

/**
 * @brief The header of a row
 * 
 */
class RowHeader : private std::unordered_map<std::string, int>
{
public:
    /**
     * @brief Construct a new Row Header object
     * 
     */
    RowHeader() = default;
    /**
     * @brief Construct a new Row Header object
     * 
     * @param list An initializer list like `{"col1", "col2", "col3"}`
     */
    LIAPI RowHeader(const std::initializer_list<std::string>& list);
    /// Move constructor
    RowHeader(RowHeader&& other) noexcept = default;
    /// Copy constructor
    RowHeader(const RowHeader& other) = default;
    /**
     * @brief Add a column to the header
     * 
     * @param  name The name of the column
     * @return int The index of the column
     */
    LIAPI int add(const std::string& name);
    /**
     * @brief Get whether the header contains a column
     * 
     * @param  name The name of the column
     * @return true The column exists
     */
    LIAPI bool contains(const std::string& name) const;
    /**
     * @brief Remove a column from the header
     * 
     * @param name The name of the column
     */
    LIAPI void remove(const std::string& name);
    /**
     * @brief Get the size of the header
     * 
     * @return int The size of the header
     */
    LIAPI size_t size() const;
    /**
     * @brief Get the index of a column
     * 
     * @param  name The name of the column
     * @return int The index of the column
     * @throws std::out_of_range If the column does not exist
     */
    LIAPI int& at(const std::string& name);
    /**
     * @brief Get the iterator to the first element
     * 
     * @return std::unordered_map<std::string, int>::iterator The iterator
     */
    LIAPI std::unordered_map<std::string, int>::iterator begin();
    /**
     * @brief Get the iterator to the last element
     * 
     * @return std::unordered_map<std::string, int>::iterator The iterator
     */
    LIAPI std::unordered_map<std::string, int>::iterator end();

    /**
     * @brief Get the index of a column
     * 
     * @param  name The name of the column
     * @return int The index of the column
     * @note   It will create the column(= add) if it does not exist
     */
    LIAPI int& operator[](const std::string& name);

    /// Move assignment operator
    RowHeader& operator=(RowHeader&& other) noexcept = default;
    /// Copy assignment operator
    RowHeader& operator=(const RowHeader& other) = default;
};

/**
 * @brief A row of data
 *
 */
class Row : public std::vector<Any>
{
public:
    RowHeader& header; //!< The header of the row(references, to avoid copying)

    Row() = default;
    /**
     * @brief Construct a new Row object.
     * 
     * @param header The header(column names) of the row(references)
     */
    LIAPI Row(RowHeader& header);
    /**
     * @brief Construct a new Row object.
     * 
     * @param list   List of values
     * @param header The header(column names) of the row(references)
     * @throw std::invalid_argument If the size of the vector is not equal to the size of the header
     * @par Example
     * @code
     * RowHeader header{"id", "age", "name"};
     * Row row({114, 2000, "alex"}, header);
     * @endcode
     */
    LIAPI Row(const std::initializer_list<Any>& list, RowHeader& header);
    /**
     * @brief Construct a new Row object(move).
     * 
     * @param list   Vector of values
     * @param header The header(column names) of the row(references)
     * @throw std::invalid_argument If the size of the vector is not equal to the size of the header
     */
    LIAPI Row(std::vector<Any>&& list, RowHeader& header);
    /**
     * @brief Construct a new Row object.
     * 
     * @param list   Vector of values
     * @param header The header(column names) of the row(references)
     * @throw std::invalid_argument If the size of the vector is not equal to the size of the header
     */
    LIAPI Row(const std::vector<Any>& list, RowHeader& header);
    /**
     * @brief Construct a new Row object.
     * 
     * @param list   List of column names(header) and values
     * @param header The header(column names) of the row(references)
     * @par Example
     * @code
     * RowHeader header; // Empty header
     * Row row({{"id", 114}, {"age", 2000}, {"name", "alex"}}, header);
     * // header will be filled with {"id", "age", "name"} after construction
     * @endcode
     */
    LIAPI Row(const std::initializer_list<std::pair<std::string, Any>>& list, RowHeader& header);
    /**
     * @brief Construct a new Row object(move).
     * 
     * @param list   Vector of column names(header) and values
     * @note MSVC with commandline parameter `/permissive` ONLY
     * @par Example
     * @code
     * Row row({{"id", 114}, {"age", 2000}, {"name", "alex"}});
     * @endcode
     */
    LIAPI Row(const std::initializer_list<std::pair<std::string, Any>>& list);
    /**
     * @brief Constuct a new Row object without header.
     * 
     * @param list   List of values
     */
    LIAPI Row(const std::initializer_list<Any>& list);
    /// Move constructor
    LIAPI Row(Row&& other) noexcept;
    /// Copy constructor
    LIAPI Row(const Row& other);
    /// Move assignment operator
    LIAPI Row& operator=(Row&& other) noexcept;
    /// Copy assignment operator
    LIAPI Row& operator=(const Row& other);
    /**
     * @brief Get the value of a column
     * 
     * @param column The name of the column
     * @return Any&  The value of the column
     * @note It will create a new Any object if the column doesn't exist
     */
    LIAPI Any& operator[](const std::string& column);
    /**
     * @brief Get the value of a column
     * 
     * @param column The name of the column
     * @return Any&  The value of the column
     * @throw std::out_of_range If the column does not exist
     */
    LIAPI Any& at(const std::string& column);
    /**
     * @brief Traverse the row
     * 
     * @param cb The function to call for each element.
     * @note  Return false in callback function to stop the iteration
     */
    LIAPI void forEach(std::function<bool(const std::string&, Any&)> cb);
};

} // namespace DB