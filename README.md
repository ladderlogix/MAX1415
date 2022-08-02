# MAX1415

This is arduino code for the MAX1415 ADC Chip. It allows for simply interfacing with that chip.

## Chip/Code setup
Include the header file
``` C
const int ChipSelect = 53;
const int DataReady = 2;

ChipSetup(ChipSelect, DataReady);
```

## Reading the value
``` C
volt = GetReading();
```
