#ifndef LIBRGB_H
#define LIBRGB_H

class RGB {
	private:
		int r_pin;
		int g_pin;
		int b_pin;
	public:
		RGB(int r, int g, int b);
		~RGB();
		void close();
		void red();
		void green();
		void blue();
		void yellow();
		void purple();
		void cyan();
		void white();
		void custom_rgb_u8(int a, int b, int c);
		void custom_rgb_u16(int a, int b, int c);
};

#endif
