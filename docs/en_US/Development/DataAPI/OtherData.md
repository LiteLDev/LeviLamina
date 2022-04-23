## 🧰 Other Data Processing APIs

Provides some other common data processing interfaces. You can use and expand by yourself.

### Convert Variable to Json String

`data.toJson(var[,space])`

- Parameters: 
  - var : `Any type`  
    Variable to convert to JSON string. The allowed data types for conversion are:   
    `Integer` `Float` `String` `Boolean` `Array` `Object `  
    The above elements can only be nested inside an `Array` or `Object`.
  - space : `Integer`  
    (Optional parameter) If you want to format the output string, pass this parameter.  
    Represents the number of spaces in each indent, so that the output JSON string is more human-readable.  
    This parameter defaults to 0, that is, the output string is not formatted
- Return value: Converted JSON string.
- Return value type: `String`
  - If the return value is `Null`, it means that the conversion failed.

<br>

### Json String Parsed as Variable

`data.parseJson(json)`

- Parameters: 
  - json : `String`  
    Json string to convert to variable.
- Return value: The converted variable.
- Return value type: `Any type`, depending on the data type contained in Json.
  - If the return value is `Null`, it means that the conversion failed .

<br>

### MD5 Calculation

`data.toMD5(str)`

- Parameters: 
  - str : `String` / `ByteBuffer`  
    String/byte array from which to calculate MD5.
- Return value: MD5 digest string of original data.
- Return value type: `String`

<br>

### SHA1 Calculation

`data.toSHA1(str)`

- Parameters: 
  - str : `String` / `ByteBuffer`  
    String/byte array to calculate SHA1.
- Return value: SHA1 digest string of original data.
- Return value type: `String`

<br>

### Data to Base64

`data.toBase64(str)`

- Parameter: 
  - str : `String` / `ByteBuffer`  
    String/byte array to convert to Base64.
- Return value: Base64 result.
- Return value type: `String`

<br>

### Base64 decode to data

`data.fromBase64(base64, isBinary)`

- Parameters: 
  - base64 : `String`  
    The base64 string to decode.
  - isBinary : `Boolean`  
    Returns whether the data type is binary data, the default is false.
- Return value: Decoded data.
- Return value type: `String` or `ByteBuffer`

<br>