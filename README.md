# C++ Utility Library

A collection of reusable C++ utility classes designed to simplify common programming tasks. The project includes classes for string manipulation, date calculations, input validation, general-purpose utilities, and date period operations.

The goal is to organize commonly used functionality into reusable header files that can be included in future C++ projects.

## Libraries

### clsString

Provides utilities for working with strings and characters.

- Count words, letters, vowels, and specific characters.
- Convert strings to uppercase or lowercase.
- Capitalize or lowercase the first letter of each word.
- Invert the case of letters.
- Split strings and join string collections.
- Trim spaces from the beginning and end of a string.
- Reverse word order.
- Replace words with optional case-sensitive matching.
- Remove punctuation.

### clsDate

Provides date manipulation and calendar-related operations.

- Create dates using different constructors.
- Retrieve the system date and date-time string.
- Validate dates and identify leap years.
- Calculate days, hours, minutes, and seconds in years and months.
- Determine the day of the week.
- Display monthly and yearly calendars.
- Add or subtract days, weeks, months, years, decades, centuries, and millennia.
- Compare dates and calculate the difference between them.
- Calculate business days and vacation-related dates.

### clsUtil

Provides general-purpose utility functions.

- Generate random numbers and characters.
- Generate random words and formatted keys.
- Fill arrays with random numbers, words, and keys.
- Swap values of supported data types.
- Shuffle arrays.
- Generate tab characters.
- Apply basic character-shift encryption and decryption helpers.

**Note:** The encryption and decryption functions are educational examples and must not be used to protect sensitive information.

### clsInputValidate

Provides input-reading and validation utilities.

- Read integer, short, float, and double values.
- Validate numeric input.
- Check whether values fall within specified ranges.
- Read numbers within a defined range.
- Read strings from console input.
- Validate dates and check whether dates fall within a period.

### clsPeriod

Provides utilities for representing and comparing date periods.

- Store a period's start and end dates.
- Check whether two date periods overlap.
- Print period information.

## Technologies Used

- **Language:** C++
- **IDE:** Microsoft Visual Studio 2022
- **Project Type:** Visual Studio C++ project
- **Library Design:** Header files and reusable classes
- **Version Control:** Git and GitHub

## Dependencies

The utility classes have the following dependencies:

- `clsDate.h` uses `clsString.h` to parse date strings.
- `clsUtil.h` uses `clsDate.h`.
- `clsInputValidate.h` uses `clsDate.h`.
- `clsPeriod.h` uses `clsDate.h`.

Include the required header files in a C++ source file when using their classes.

## Project Structure

```text
Cpp-Utility-Library/
├── .gitignore
├── Cpp-Utility-Library.sln
└── Cpp-Utility-Library/
    ├── Cpp-Utility-Library.cpp
    ├── Cpp-Utility-Library.vcxproj
    ├── Cpp-Utility-Library.vcxproj.filters
    ├── clsString.h
    ├── clsDate.h
    ├── clsUtil.h
    ├── clsInputValidate.h
    └── clsPeriod.h
```

## Build and Run

1. Install Microsoft Visual Studio 2022 with the **Desktop development with C++** workload.
2. Open `Cpp-Utility-Library.sln` in Visual Studio.
3. Select the `Debug` configuration and `x64` platform.
4. Build the solution using **Build > Build Solution**, or press `Ctrl + Shift + B`.
5. Run the application using `Ctrl + F5`.

The current `main()` function is a starting point for experimenting with and testing the utility classes.

## Development Status

This library is a work in progress. The classes have been added to the project, and further review, testing, and improvements are planned.

Possible future improvements include:

- Fix remaining compiler warnings and potential logic issues.
- Add focused examples for each utility class.
- Create automated tests for date calculations, string operations, and period overlap checks.
- Improve input-validation edge cases.
- Make each header file independently includable with explicit dependencies.
- Add documentation for public methods and their usage.

## License

This project is licensed under the [MIT License](LICENSE). You are free to use, modify, and distribute the software subject to the terms of the license.
