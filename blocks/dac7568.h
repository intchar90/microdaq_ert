#ifndef DAC7568_H
#define DAC7568_H

#include <stdint.h>
#define DAC7568_RESOLUTION 		(12)

void dac7568_init(uint8_t mode);
void dac7568_write_ch(uint8_t ch, uint16_t value);
void dac7568_write_ch_reg(uint8_t ch, uint16_t value);

#endif /* DAC7568_H */
