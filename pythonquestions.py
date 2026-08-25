import matplotlib.pyplot as plt 
plt.scatter([1,2,3],[20,30,40],color='blue',label='class A')
plt.scatter([4,5,6],[50,60,70],color='pink',label='class B')
plt.xlabel('hello')
plt.ylabel('hi')
plt.title('comparison')
plt.legend()
plt.savefig("scatercomparison.png",bbox_inches='tight')
plt.show()

