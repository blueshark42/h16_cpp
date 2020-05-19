# h16_cpp
Nachadzajú sa tu úlohy z webstránky *itcpp.szm.com*.

## Obsah
- **h16.sln** - VS Solution, Code::Blocks to nepotrebuje.
- **Debug** - Obsahuje priečinky a súbory na debugging.
- **h16.cpp** - *Hlavný dokument, obsahuje C++ zdrojový kód*.
- **h16.vcxproj** - VS Project dokumenty, Code::Blocks to nepotrebuje.

Dokumenty ktoré sú pomenované po nejakej funkcií zo ZK su vytvorené/potrebné aby to počítač zkompiloval. Pri kompilácii ich program vytvorí.

## Source Code

### Declaring
Vždy priamo deklarované typy `int, float, bool...`, zriedka automaticky `auto`.

### Naming Style
- Classes and structs       - `UpperCamelCase`
- Enums                     - `UpperCamelCase`
- Unions                    - `all_lower`
- Template Parameters       - `UpperCamelCase`
- Parameters                - `all_lower`
- Local Variables           - `all_lower[all_lower]`
- Global Variables          - `all_lower[all_lower]`
- Global Functions          - `UpperCamelCase`
- Class and struct methods  - `UpperCamelCase`
- Class and struct fields   - `all_lower_`
- Class and str public fld. - `all_lower`
- Union Members             - `all_lower`
- Enum Members              - `ALL_UPPER`
- Other Constants           - `kUpperCamelCase`
- Global Constants          - `kUpperCamelCase`
- Namespaces                - `all_lower`
- Typedefs                  - `all_lower`
- Macros                    - `ALL_UPPER`
- Properties                - `UpperCamelCase`
- Events                    - `UpperCamelCase`

### Postup
```
<Includes>

<Preprocessor Dir>

<Definition>

<int main>

<struct, class, typedef...>
<Declaration>
```
Napr.:
```
#include <iostream>
#include <vector>

#define WEBSTRANKA     L"Github"

template <typename T>
static void Swap(T& a, T& b);

template <typename T>
static std::vector<T> Range(T min, T max);

int main()
{
  // Run functions here
  
  return 0;
}

template <typename T>
static void swap(T& a, T& b)
{
    T c = a;
    a = b;
    b = c;
}

template <typename T>
static std::vector<T> Range(T min, T max)
{
    if (min > max)
        Swap(min, max);
    if (min == max)
        return std::vector<T>(1, min);
    std::vector<T> values;
    for (; min <= max; ++min)
        values.push_back(min);
    return values;
}

```
