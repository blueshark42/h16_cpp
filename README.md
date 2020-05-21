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
