##############################
# artery.makefile
# Author: Jonathon Zeitler
#
# makes: artery
# use: make -f artery.makefile
##############################

artery : artery.cpp
	g++ -std=c++11 -Wall artery.cpp -o artery